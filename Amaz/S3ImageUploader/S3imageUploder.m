//
//  S3imageUploder.m
//  Amaz
//
//  Created by Rishabh on 26/06/15.
//  Copyright (c) 2015 Rishabh. All rights reserved.
//

#import "S3imageUploder.h"
#import "AmazonS3Client.h"

@implementation S3imageUploder
-(id)uploadImage:(UIImage *)image imageName:(NSString *)imageName handler:(ImageUploaderCompletionHandler)handler
{
     _imageHandler=[handler copy];
    [self uploadImageTOAmazon:image imageName:imageName];
    return self;
}
-(void)uploadImageTOAmazon:(UIImage *)image imageName:(NSString *)imageName
{
   
    AmazonS3Client *s3Client = [[AmazonS3Client alloc] initWithAccessKey:ACCESS_KEY_ID withSecretKey:SECRET_KEY];
    s3Client.timeout = 240;
    
    NSString *bucketName = [NSString stringWithFormat:@"apptread.com"];
NSString *imageName1 = [NSString stringWithFormat:@"%@.jpg",imageName];
    
    S3PutObjectRequest *objReq = [[S3PutObjectRequest alloc] initWithKey:imageName1 inBucket:bucketName];
    objReq.contentType = @"image/jpeg";
    
   // UIImage *testImageToUpload = [UIImage imageNamed:@"Screen.png"];
    
    NSData *imageData = UIImageJPEGRepresentation(image, 0.2);
    objReq.data = imageData;
    objReq.delegate = self;
    
    objReq.contentLength = [imageData length];
    
    [s3Client putObject:objReq];
}
- (void)request:(AmazonServiceRequest *)request didCompleteWithResponse:(AmazonServiceResponse *)response
{
   // NSLog(@"response: %@", response.description);
    if (self.imageHandler)
    {
        self.imageHandler(nil, response);
    }
    self.imageHandler = nil;
}

- (void)request:(AmazonServiceRequest *)request didFailWithError:(NSError *)error
{
    NSLog(@"Req failed: %@", error.description);
    if (self.imageHandler)
    {
        self.imageHandler(error.description, nil);
    }
    self.imageHandler = nil;
}

@end
