/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import "AutoScalingExecutePolicyRequestMarshaller.h"

@implementation AutoScalingExecutePolicyRequestMarshaller

+(AmazonServiceRequest *)createRequest:(AutoScalingExecutePolicyRequest *)executePolicyRequest
{
    AmazonServiceRequest *request = [[AutoScalingRequest alloc] init];

    [request setParameterValue:@"ExecutePolicy"           forKey:@"Action"];
    [request setParameterValue:@"2010-08-01"   forKey:@"Version"];

    [request setDelegate:[executePolicyRequest delegate]];
    [request setCredentials:[executePolicyRequest credentials]];
    [request setEndpoint:[executePolicyRequest requestEndpoint]];
    [request setRequestTag:[executePolicyRequest requestTag]];

    if (executePolicyRequest != nil) {
        if (executePolicyRequest.autoScalingGroupName != nil) {
            [request setParameterValue:[NSString stringWithFormat:@"%@", executePolicyRequest.autoScalingGroupName] forKey:[NSString stringWithFormat:@"%@", @"AutoScalingGroupName"]];
        }
    }
    if (executePolicyRequest != nil) {
        if (executePolicyRequest.policyName != nil) {
            [request setParameterValue:[NSString stringWithFormat:@"%@", executePolicyRequest.policyName] forKey:[NSString stringWithFormat:@"%@", @"PolicyName"]];
        }
    }
    if (executePolicyRequest != nil) {
        if (executePolicyRequest.honorCooldownIsSet) {
            [request setParameterValue:(executePolicyRequest.honorCooldown ? @"true":@"false") forKey:[NSString stringWithFormat:@"%@", @"HonorCooldown"]];
        }
    }


    return [request autorelease];
}

@end

