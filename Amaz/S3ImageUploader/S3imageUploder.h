//
//  S3imageUploder.h
//  Amaz
//
//  Created by Rishabh on 26/06/15.
//  Copyright (c) 2015 Rishabh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AmazonRequestDelegate.h"
typedef void (^ImageUploaderCompletionHandler)(NSString *error, AmazonServiceResponse *response);
@interface S3imageUploder : NSObject<AmazonServiceRequestDelegate>
@property (nonatomic, copy) ImageUploaderCompletionHandler imageHandler;
-(id)uploadImage:(UIImage *)image imageName:(NSString *)imageName handler:(ImageUploaderCompletionHandler)handler;
@end
