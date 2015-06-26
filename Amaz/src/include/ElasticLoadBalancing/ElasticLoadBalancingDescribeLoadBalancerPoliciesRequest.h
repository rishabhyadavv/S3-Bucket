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


#import "../AmazonServiceRequestConfig.h"



/**
 * Describe Load Balancer Policies Request
 *
 * \ingroup ElasticLoadBalancing
 */

@interface ElasticLoadBalancingDescribeLoadBalancerPoliciesRequest:AmazonServiceRequestConfig

{
    NSString       *loadBalancerName;
    NSMutableArray *policyNames;
}



/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * The mnemonic name associated with the LoadBalancer. If no name is
 * specified, the operation returns the attributes of either all the
 * sample policies pre-defined by the Elastic Load Balancing service or
 * the specified sample polices.
 */
@property (nonatomic, retain) NSString *loadBalancerName;

/**
 * The names of the LoadBalancer polices created, including the sample
 * policies pre-defined by the Elastic Load Balancing service or the
 * specified sample policies.
 */
@property (nonatomic, retain) NSMutableArray *policyNames;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
