//
//  ViewController.m
//  Amaz
//
//  Created by Rishabh on 25/06/15.
//  Copyright (c) 2015 Rishabh. All rights reserved.
//

#import "ViewController.h"
#import "Constants.h"
#import <AVFoundation/AVFoundation.h>
#import "MBProgressHUD.h"
#import <QuartzCore/QuartzCore.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    _photoView.hidden=YES;
    _photoView.layer.cornerRadius=10.0f;
    // Do any additional setup after loading the view, typically from a nib.
}
-(IBAction)listBuckets:(id)sender
{
    //[self uploadImage];
    /*if ( ![AmazonClientManager hasCredentials] ) {
        [[Constants credentialsAlert] show];
    }
    else {
        BucketList *bucketList = [[BucketList alloc] init];
        bucketList.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;
        
        [self presentViewController:bucketList animated:YES completion:nil];
       // [bucketList release];
    }*/
}
-(IBAction)cancelAction
{
    _photoView.hidden=YES;
    _imageNameTextfield.text=@"";
    _imageView.image=nil;
}
#pragma mark - Take Picture
-(IBAction)uploadAction
{
    if (ACCESS_KEY_ID.length<1) {
        [self showAlertView:@"Please enter Access Key and secret id in Contsant.h file"];
        return;
    }
    [self sendImageToManager:_imageView.image imageName:_imageNameTextfield.text];
}
-(IBAction)takePhotoAction
{
       UIActionSheet *actionSheetPic = [[UIActionSheet alloc] initWithTitle:nil
                                                                delegate:self
                                                       cancelButtonTitle:@"Cancel"
                                                  destructiveButtonTitle:nil
                                                       otherButtonTitles:@"Photo Library",@"Camera",nil];
    actionSheetPic.tag=501;
    [actionSheetPic setActionSheetStyle:UIActionSheetStyleDefault];
    [actionSheetPic showInView:self.view];
}
#pragma mark - UIAction sheet
- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (actionSheet.tag==501) {
        if (buttonIndex==0) {
            [self choosePicker:buttonIndex];
        }
        else if(buttonIndex==1)
        {
            [self choosePicker:buttonIndex];
        }
    }
    }
#pragma mark Image Upload/Download Stack
-(void)choosePicker:(NSInteger)item
{
    
    UIImagePickerController  *pickerOne = [[UIImagePickerController alloc] init];
    pickerOne.delegate = self;
    if (item==0) {
        pickerOne.sourceType = UIImagePickerControllerSourceTypeSavedPhotosAlbum;
    }
    else
    {
        BOOL isAllowed=[self checkCameraPermission];
        if (!isAllowed) {
            return;
        }
        pickerOne.sourceType = UIImagePickerControllerSourceTypeCamera;
    }
    [self presentViewController:pickerOne animated:YES completion:nil];
}

#pragma mark check camera permission
-(BOOL)checkCameraPermission
{
    AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeVideo];
    BOOL isAceesed;
    if(authStatus == AVAuthorizationStatusAuthorized) {
        // do your logic
        isAceesed=YES;
    } else if(authStatus == AVAuthorizationStatusDenied){
        isAceesed=NO;
        [self showAlertView:@"It looks like your privacy settings are preventing us from accessing your camera. You can fix this by doing the following:\n\n1. Go to Settings.\n\n2. Open GoSnow app.\n\n3. Turn the Camera on.\n\n4. Open this app and try again."];
        // denied
    } else if(authStatus == AVAuthorizationStatusRestricted){
        // restricted, normally won't happen
        [self showAlertView:@"You've been restricted from using the camera on this device. Without camera access this feature won't work"];
        isAceesed=NO;
        
    } else
    {
        isAceesed=YES;
    }
    return isAceesed;
}
#pragma mark alert view
-(void)showAlertView:(NSString *)message
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Amazon S3 bucket" message:message delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil];
    [alert show];
}
#pragma mark - ImagePicker delegate
- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info {
    
    UIImage *image = [info objectForKey:@"UIImagePickerControllerOriginalImage"];
    UIImage *new=[self squareImageWithImage:image scaledToSize:CGSizeMake(400, 400)];
    [self showPhotView:new];
   
    [picker dismissViewControllerAnimated:YES completion:nil];
}
#pragma mark image Picker cancel delagte method
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    [[UIApplication sharedApplication] setStatusBarHidden:YES];
    [picker dismissViewControllerAnimated:YES completion:nil];
}
#pragma mark show photoview with animation
-(void)showPhotView:(UIImage *)image
{
    _photoView.hidden=NO;
    _photoView.frame=CGRectMake(_photoView.frame.origin.x, HEIGHT, _photoView.frame.size.width, _photoView.frame.size.height);
    _imageView.image=image;
    [UIView animateWithDuration:0.3
                          delay:0.2
                        options:UIViewAnimationOptionCurveEaseInOut
                     animations:^{
                         _photoView.frame=CGRectMake(_photoView.frame.origin.x, 100, _photoView.frame.size.width, _photoView.frame.size.height);
                         
                     }
     
                     completion:^(BOOL finished){
                        
                     }];

}
#pragma mark scale image
- (UIImage *)squareImageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize {
    double ratio;
    double delta;
    CGPoint offset;
    
    //make a new square size, that is the resized imaged width
    CGSize sz = CGSizeMake(newSize.width, newSize.width);
    
    //figure out if the picture is landscape or portrait, then
    //calculate scale factor and offset
    if (image.size.width > image.size.height) {
        ratio = newSize.width / image.size.width;
        delta = (ratio*image.size.width - ratio*image.size.height);
        offset = CGPointMake(delta/2, 0);
    } else {
        ratio = newSize.width / image.size.height;
        delta = (ratio*image.size.height - ratio*image.size.width);
        offset = CGPointMake(0, delta/2);
    }
    
    //make the final clipping rect based on the calculated values
    CGRect clipRect = CGRectMake(-offset.x, -offset.y,
                                 (ratio * image.size.width) + delta,
                                 (ratio * image.size.height) + delta);
    
    
    //start a new context, with scale factor 0.0 so retina displays get
    //high quality image
    if ([[UIScreen mainScreen] respondsToSelector:@selector(scale)]) {
        UIGraphicsBeginImageContextWithOptions(sz, YES, 0.0);
    } else {
        UIGraphicsBeginImageContext(sz);
    }
    UIRectClip(clipRect);
    [image drawInRect:clipRect];
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return newImage;
}

#pragma mark uitextfield delagte method
- (void)textFieldDidEndEditing:(UITextField *)textField
{
   
    
}
- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    
}
- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    
    
    return YES;
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}
#pragma mark validate text
-(BOOL)isValidate
{
    if (_imageNameTextfield.text.length<1) {
        [self showAlert:@"Please enter image name"];
        return NO;
    }
    return YES;
}
#pragma mark call to manager
-(void)sendImageToManager:(UIImage *)image imageName:(NSString *)imagename
{
    if ([self isValidate]) {
        _photoView.hidden=YES;
        [MBProgressHUD showHUDAddedTo:self.view animated:YES];
        __weak ViewController *weakself = self;
        uploader=[[S3imageUploder alloc] uploadImage:image imageName:imagename handler:^(NSString *error, AmazonServiceResponse *response) {
            
            if (error.length>0) {
                [weakself showAlert:@"Please enter image name"];
            }
            else
            {
                [weakself showAlert:@"Image uploaded succesfully"];
            }
        }];
       // uploader=nil;
    }
   /* AmazonS3Client *s3Client = [[AmazonS3Client alloc] initWithAccessKey:ACCESS_KEY_ID withSecretKey:SECRET_KEY];
    s3Client.timeout = 240;
    
    NSString *bucketName = [NSString stringWithFormat:@"apptread.com"];
    NSString *imageName = [NSString stringWithFormat:@"rishabh"];
    
    S3PutObjectRequest *objReq = [[S3PutObjectRequest alloc] initWithKey:imageName inBucket:bucketName];
    objReq.contentType = @"image/jpeg";
    
    UIImage *testImageToUpload = [UIImage imageNamed:@"Screen.png"];
    
    NSData *imageData = UIImageJPEGRepresentation(testImageToUpload, 0.2);
    objReq.data = imageData;
    objReq.delegate = self;
    
    objReq.contentLength = [imageData length];
    
    [s3Client putObject:objReq];*/
}
- (void)request:(AmazonServiceRequest *)request didCompleteWithResponse:(AmazonServiceResponse *)response
{
    NSLog(@"response: %@", response.description);
}

- (void)request:(AmazonServiceRequest *)request didFailWithError:(NSError *)error
{
    NSLog(@"Req failed: %@", error.description);
}
#pragma mark show alert
-(void)showAlert:(NSString *)message
{
    [MBProgressHUD hideHUDForView:self.view animated:YES];
    UIAlertView *alert=[[UIAlertView alloc] initWithTitle:@"Amazon S3 Bucket" message:message delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    [alert show];
    
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
