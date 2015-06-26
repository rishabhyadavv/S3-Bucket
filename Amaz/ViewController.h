//
//  ViewController.h
//  Amaz
//
//  Created by Rishabh on 25/06/15.
//  Copyright (c) 2015 Rishabh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AmazonRequestDelegate.h"
#import "S3imageUploder.h"
@interface ViewController : UIViewController<AmazonServiceRequestDelegate,UINavigationControllerDelegate,UIImagePickerControllerDelegate,UIActionSheetDelegate>
{
    S3imageUploder *uploader;
}

@property(nonatomic,weak)IBOutlet UIView *photoView;
@property(nonatomic,weak)IBOutlet UITextField *imageNameTextfield;
@property(nonatomic,weak)IBOutlet UIImageView *imageView;
@end

