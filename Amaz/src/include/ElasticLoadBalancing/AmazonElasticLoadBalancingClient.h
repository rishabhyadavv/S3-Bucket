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
#import "ElasticLoadBalancingConfigureHealthCheckResponse.h"
#import "ElasticLoadBalancingConfigureHealthCheckResponseUnmarshaller.h"
#import "ElasticLoadBalancingConfigureHealthCheckRequest.h"
#import "ElasticLoadBalancingConfigureHealthCheckRequestMarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerResponse.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerResponseUnmarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerRequest.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerRequestMarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateResponse.h"
#import "ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateResponseUnmarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateRequest.h"
#import "ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateRequestMarshaller.h"
#import "ElasticLoadBalancingRegisterInstancesWithLoadBalancerResponse.h"
#import "ElasticLoadBalancingRegisterInstancesWithLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingRegisterInstancesWithLoadBalancerRequest.h"
#import "ElasticLoadBalancingRegisterInstancesWithLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerResponse.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerResponseUnmarshaller.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerRequest.h"
#import "ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerRequestMarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerListenersResponse.h"
#import "ElasticLoadBalancingDeleteLoadBalancerListenersResponseUnmarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerListenersRequest.h"
#import "ElasticLoadBalancingDeleteLoadBalancerListenersRequestMarshaller.h"
#import "ElasticLoadBalancingCreateLBCookieStickinessPolicyResponse.h"
#import "ElasticLoadBalancingCreateLBCookieStickinessPolicyResponseUnmarshaller.h"
#import "ElasticLoadBalancingCreateLBCookieStickinessPolicyRequest.h"
#import "ElasticLoadBalancingCreateLBCookieStickinessPolicyRequestMarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPoliciesResponse.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPoliciesResponseUnmarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPoliciesRequest.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPoliciesRequestMarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPolicyTypesResponse.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPolicyTypesResponseUnmarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPolicyTypesRequest.h"
#import "ElasticLoadBalancingDescribeLoadBalancerPolicyTypesRequestMarshaller.h"
#import "ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerResponse.h"
#import "ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerRequest.h"
#import "ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerResponse.h"
#import "ElasticLoadBalancingCreateLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerRequest.h"
#import "ElasticLoadBalancingCreateLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerResponse.h"
#import "ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerRequest.h"
#import "ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerPolicyResponse.h"
#import "ElasticLoadBalancingCreateLoadBalancerPolicyResponseUnmarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerPolicyRequest.h"
#import "ElasticLoadBalancingCreateLoadBalancerPolicyRequestMarshaller.h"
#import "ElasticLoadBalancingDeregisterInstancesFromLoadBalancerResponse.h"
#import "ElasticLoadBalancingDeregisterInstancesFromLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingDeregisterInstancesFromLoadBalancerRequest.h"
#import "ElasticLoadBalancingDeregisterInstancesFromLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingCreateAppCookieStickinessPolicyResponse.h"
#import "ElasticLoadBalancingCreateAppCookieStickinessPolicyResponseUnmarshaller.h"
#import "ElasticLoadBalancingCreateAppCookieStickinessPolicyRequest.h"
#import "ElasticLoadBalancingCreateAppCookieStickinessPolicyRequestMarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerResponse.h"
#import "ElasticLoadBalancingDeleteLoadBalancerResponseUnmarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerRequest.h"
#import "ElasticLoadBalancingDeleteLoadBalancerRequestMarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerPolicyResponse.h"
#import "ElasticLoadBalancingDeleteLoadBalancerPolicyResponseUnmarshaller.h"
#import "ElasticLoadBalancingDeleteLoadBalancerPolicyRequest.h"
#import "ElasticLoadBalancingDeleteLoadBalancerPolicyRequestMarshaller.h"
#import "ElasticLoadBalancingDescribeInstanceHealthResponse.h"
#import "ElasticLoadBalancingDescribeInstanceHealthResponseUnmarshaller.h"
#import "ElasticLoadBalancingDescribeInstanceHealthRequest.h"
#import "ElasticLoadBalancingDescribeInstanceHealthRequestMarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancersResponse.h"
#import "ElasticLoadBalancingDescribeLoadBalancersResponseUnmarshaller.h"
#import "ElasticLoadBalancingDescribeLoadBalancersRequest.h"
#import "ElasticLoadBalancingDescribeLoadBalancersRequestMarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerListenersResponse.h"
#import "ElasticLoadBalancingCreateLoadBalancerListenersResponseUnmarshaller.h"
#import "ElasticLoadBalancingCreateLoadBalancerListenersRequest.h"
#import "ElasticLoadBalancingCreateLoadBalancerListenersRequestMarshaller.h"

#import "../AmazonWebServiceClient.h"

/** \defgroup ElasticLoadBalancing Elastic Load Balancing */

/** <summary>
 * Interface for accessing AmazonElasticLoadBalancing.
 *
 *  Elastic Load Balancing <p>
 * Elastic Load Balancing is a cost-effective and easy to use web
 * service to help you improve availability and scalability of your
 * application. It makes it easy for you to distribute application loads
 * between two or more EC2 instances. Elastic Load Balancing enables
 * availability through redundancy and supports traffic growth of your
 * application.
 * </p>
 * </summary>
 *
 * \ingroup ElasticLoadBalancing
 */
@interface AmazonElasticLoadBalancingClient:AmazonWebServiceClient
{
}


/**
 * <p>
 * Enables the client to define an application healthcheck for the
 * instances.
 * </p>
 *
 * @param configureHealthCheckRequest Container for the necessary
 *           parameters to execute the ConfigureHealthCheck service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the ConfigureHealthCheck service method, as
 *         returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingConfigureHealthCheckResponse *)configureHealthCheck:(ElasticLoadBalancingConfigureHealthCheckRequest *)configureHealthCheckRequest;


/**
 * <p>
 * Replaces the current set of policies associated with a port on which
 * the back-end server is listening with a new set of policies. After the
 * policies have been created using CreateLoadBalancerPolicy, they can be
 * applied here as a list. At this time, only the back-end server
 * authentication policy type can be applied to the back-end ports; this
 * policy type is composed of multiple public key policies.
 * </p>
 *
 * @param setLoadBalancerPoliciesForBackendServerRequest Container for
 *           the necessary parameters to execute the
 *           SetLoadBalancerPoliciesForBackendServer service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the SetLoadBalancerPoliciesForBackendServer
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingPolicyNotFoundException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerResponse *)setLoadBalancerPoliciesForBackendServer:(ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerRequest *)setLoadBalancerPoliciesForBackendServerRequest;


/**
 * <p>
 * Sets the certificate that terminates the specified listener's SSL
 * connections. The specified certificate replaces any prior certificate
 * that was used on the same LoadBalancer and port.
 * </p>
 *
 * @param setLoadBalancerListenerSSLCertificateRequest Container for the
 *           necessary parameters to execute the
 *           SetLoadBalancerListenerSSLCertificate service method on
 *           AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingCertificateNotFoundException
 * @throws ElasticLoadBalancingListenerNotFoundException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateResponse *)setLoadBalancerListenerSSLCertificate:(ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateRequest *)setLoadBalancerListenerSSLCertificateRequest;


/**
 * <p>
 * Adds new instances to the LoadBalancer.
 * </p>
 * <p>
 * Once the instance is registered, it starts receiving traffic and
 * requests from the LoadBalancer. Any instance that is not in any of the
 * Availability Zones registered for the LoadBalancer will be moved to
 * the <i>OutOfService</i> state. It will move to the <i>InService</i>
 * state when the Availability Zone is added to the LoadBalancer.
 * </p>
 * <p>
 * <b>NOTE:</b> In order for this call to be successful, the client must
 * have created the LoadBalancer. The client must provide the same
 * account credentials as those that were used to create the
 * LoadBalancer.
 * </p>
 * <p>
 * <b>NOTE:</b> Completion of this API does not guarantee that operation
 * has completed. Rather, it means that the request has been registered
 * and the changes will happen shortly.
 * </p>
 *
 * @param registerInstancesWithLoadBalancerRequest Container for the
 *           necessary parameters to execute the RegisterInstancesWithLoadBalancer
 *           service method on AmazonElasticLoadBalancing.
 *
 * @return The response from the RegisterInstancesWithLoadBalancer
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingInvalidInstanceException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingRegisterInstancesWithLoadBalancerResponse *)registerInstancesWithLoadBalancer:(ElasticLoadBalancingRegisterInstancesWithLoadBalancerRequest *)registerInstancesWithLoadBalancerRequest;


/**
 * <p>
 * Associates, updates, or disables a policy with a listener on the
 * LoadBalancer. You can associate multiple policies with a listener.
 * </p>
 *
 * @param setLoadBalancerPoliciesOfListenerRequest Container for the
 *           necessary parameters to execute the SetLoadBalancerPoliciesOfListener
 *           service method on AmazonElasticLoadBalancing.
 *
 * @return The response from the SetLoadBalancerPoliciesOfListener
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingPolicyNotFoundException
 * @throws ElasticLoadBalancingListenerNotFoundException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerResponse *)setLoadBalancerPoliciesOfListener:(ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerRequest *)setLoadBalancerPoliciesOfListenerRequest;


/**
 * <p>
 * Deletes listeners from the LoadBalancer for the specified port.
 * </p>
 *
 * @param deleteLoadBalancerListenersRequest Container for the necessary
 *           parameters to execute the DeleteLoadBalancerListeners service method
 *           on AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDeleteLoadBalancerListenersResponse *)deleteLoadBalancerListeners:(ElasticLoadBalancingDeleteLoadBalancerListenersRequest *)deleteLoadBalancerListenersRequest;


/**
 * <p>
 * Generates a stickiness policy with sticky session lifetimes
 * controlled by the lifetime of the browser (user-agent) or a specified
 * expiration period. This policy can be associated only with HTTP/HTTPS
 * listeners.
 * </p>
 * <p>
 * When a LoadBalancer implements this policy, the LoadBalancer uses a
 * special cookie to track the backend server instance for each request.
 * When the LoadBalancer receives a request, it first checks to see if
 * this cookie is present in the request. If so, the LoadBalancer sends
 * the request to the application server specified in the cookie. If not,
 * the LoadBalancer sends the request to a server that is chosen based on
 * the existing load balancing algorithm.
 * </p>
 * <p>
 * A cookie is inserted into the response for binding subsequent
 * requests from the same user to that server. The validity of the cookie
 * is based on the cookie expiration time, which is specified in the
 * policy configuration.
 * </p>
 *
 * @param createLBCookieStickinessPolicyRequest Container for the
 *           necessary parameters to execute the CreateLBCookieStickinessPolicy
 *           service method on AmazonElasticLoadBalancing.
 *
 * @return The response from the CreateLBCookieStickinessPolicy service
 *         method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingTooManyPoliciesException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 * @throws ElasticLoadBalancingDuplicatePolicyNameException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingCreateLBCookieStickinessPolicyResponse *)createLBCookieStickinessPolicy:(ElasticLoadBalancingCreateLBCookieStickinessPolicyRequest *)createLBCookieStickinessPolicyRequest;


/**
 * <p>
 * Returns detailed descriptions of the policies. If you specify a
 * LoadBalancer name, the operation returns either the descriptions of
 * the specified policies, or descriptions of all the policies created
 * for the LoadBalancer. If you don't specify a LoadBalancer name, the
 * operation returns descriptions of the specified policies, or
 * descriptions of all the policies created by default for the
 * LoadBalancer. The names of the sample policies have the
 * <code>ELBSample-</code> prefix. The attributes of the pre-defined
 * sample policies can be changed to create your own policy for your
 * LoadBalancer.
 * </p>
 *
 * @param describeLoadBalancerPoliciesRequest Container for the necessary
 *           parameters to execute the DescribeLoadBalancerPolicies service method
 *           on AmazonElasticLoadBalancing.
 *
 * @return The response from the DescribeLoadBalancerPolicies service
 *         method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingPolicyNotFoundException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDescribeLoadBalancerPoliciesResponse *)describeLoadBalancerPolicies:(ElasticLoadBalancingDescribeLoadBalancerPoliciesRequest *)describeLoadBalancerPoliciesRequest;


/**
 * <p>
 * Returns meta-information on the specified LoadBalancer policies
 * defined by the Elastic Load Balancing service. The policy types that
 * are returned from this action can be used in a
 * CreateLoadBalancerPolicy action to instantiate specific policy
 * configurations that will be applied to an Elastic LoadBalancer.
 * </p>
 *
 * @param describeLoadBalancerPolicyTypesRequest Container for the
 *           necessary parameters to execute the DescribeLoadBalancerPolicyTypes
 *           service method on AmazonElasticLoadBalancing.
 *
 * @return The response from the DescribeLoadBalancerPolicyTypes service
 *         method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingPolicyTypeNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDescribeLoadBalancerPolicyTypesResponse *)describeLoadBalancerPolicyTypes:(ElasticLoadBalancingDescribeLoadBalancerPolicyTypesRequest *)describeLoadBalancerPolicyTypesRequest;


/**
 * <p>
 * Removes the specified EC2 Availability Zones from the set of
 * configured Availability Zones for the LoadBalancer.
 * </p>
 * <p>
 * There must be at least one Availability Zone registered with a
 * LoadBalancer at all times. A client cannot remove all the Availability
 * Zones from a LoadBalancer. Once an Availability Zone is removed, all
 * the instances registered with the LoadBalancer that are in the removed
 * Availability Zone go into the OutOfService state. Upon Availability
 * Zone removal, the LoadBalancer attempts to equally balance the traffic
 * among its remaining usable Availability Zones. Trying to remove an
 * Availability Zone that was not associated with the LoadBalancer does
 * nothing.
 * </p>
 * <p>
 * <b>NOTE:</b> In order for this call to be successful, the client must
 * have created the LoadBalancer. The client must provide the same
 * account credentials as those that were used to create the
 * LoadBalancer.
 * </p>
 *
 * @param disableAvailabilityZonesForLoadBalancerRequest Container for
 *           the necessary parameters to execute the
 *           DisableAvailabilityZonesForLoadBalancer service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the DisableAvailabilityZonesForLoadBalancer
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerResponse *)disableAvailabilityZonesForLoadBalancer:(ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerRequest *)disableAvailabilityZonesForLoadBalancerRequest;


/**
 * <p>
 * Creates a new LoadBalancer.
 * </p>
 * <p>
 * After the call has completed successfully, a new LoadBalancer is
 * created; however, it will not be usable until at least one instance
 * has been registered. When the LoadBalancer creation is completed, the
 * client can check whether or not it is usable by using the
 * DescribeInstanceHealth API. The LoadBalancer is usable as soon as any
 * registered instance is <i>InService</i> .
 *
 * </p>
 * <p>
 * <b>NOTE:</b> Currently, the client's quota of LoadBalancers is limited
 * to ten per Region.
 * </p>
 * <p>
 * <b>NOTE:</b> LoadBalancer DNS names vary depending on the Region
 * they're created in. For LoadBalancers created in the United States,
 * the DNS name ends with: us-east-1.elb.amazonaws.com (for the US
 * Standard Region) us-west-1.elb.amazonaws.com (for the Northern
 * California Region) For LoadBalancers created in the EU (Ireland)
 * Region, the DNS name ends with: eu-west-1.elb.amazonaws.com
 * </p>
 *
 * @param createLoadBalancerRequest Container for the necessary
 *           parameters to execute the CreateLoadBalancer service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the CreateLoadBalancer service method, as
 *         returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingTooManyLoadBalancersException
 * @throws ElasticLoadBalancingDuplicateLoadBalancerNameException
 * @throws ElasticLoadBalancingCertificateNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingCreateLoadBalancerResponse *)createLoadBalancer:(ElasticLoadBalancingCreateLoadBalancerRequest *)createLoadBalancerRequest;


/**
 * <p>
 * Adds one or more EC2 Availability Zones to the LoadBalancer.
 * </p>
 * <p>
 * The LoadBalancer evenly distributes requests across all its
 * registered Availability Zones that contain instances. As a result, the
 * client must ensure that its LoadBalancer is appropriately scaled for
 * each registered Availability Zone.
 * </p>
 * <p>
 * <b>NOTE:</b> The new EC2 Availability Zones to be added must be in the
 * same EC2 Region as the Availability Zones for which the LoadBalancer
 * was created.
 * </p>
 *
 * @param enableAvailabilityZonesForLoadBalancerRequest Container for the
 *           necessary parameters to execute the
 *           EnableAvailabilityZonesForLoadBalancer service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the EnableAvailabilityZonesForLoadBalancer
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerResponse *)enableAvailabilityZonesForLoadBalancer:(ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerRequest *)enableAvailabilityZonesForLoadBalancerRequest;


/**
 * <p>
 * Creates a new policy that contains the necessary attributes depending
 * on the policy type. Policies are settings that are saved for your
 * Elastic LoadBalancer and that can be applied to the front-end
 * listener, or the back-end application server, depending on your policy
 * type.
 * </p>
 *
 * @param createLoadBalancerPolicyRequest Container for the necessary
 *           parameters to execute the CreateLoadBalancerPolicy service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the CreateLoadBalancerPolicy service method,
 *         as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingTooManyPoliciesException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 * @throws ElasticLoadBalancingDuplicatePolicyNameException
 * @throws ElasticLoadBalancingPolicyTypeNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingCreateLoadBalancerPolicyResponse *)createLoadBalancerPolicy:(ElasticLoadBalancingCreateLoadBalancerPolicyRequest *)createLoadBalancerPolicyRequest;


/**
 * <p>
 * Deregisters instances from the LoadBalancer. Once the instance is
 * deregistered, it will stop receiving traffic from the LoadBalancer.
 * </p>
 * <p>
 * In order to successfully call this API, the same account credentials
 * as those used to create the LoadBalancer must be provided.
 * </p>
 *
 * @param deregisterInstancesFromLoadBalancerRequest Container for the
 *           necessary parameters to execute the
 *           DeregisterInstancesFromLoadBalancer service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the DeregisterInstancesFromLoadBalancer
 *         service method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingInvalidInstanceException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDeregisterInstancesFromLoadBalancerResponse *)deregisterInstancesFromLoadBalancer:(ElasticLoadBalancingDeregisterInstancesFromLoadBalancerRequest *)deregisterInstancesFromLoadBalancerRequest;


/**
 * <p>
 * Generates a stickiness policy with sticky session lifetimes that
 * follow that of an application-generated cookie. This policy can be
 * associated only with HTTP/HTTPS listeners.
 * </p>
 * <p>
 * This policy is similar to the policy created by
 * CreateLBCookieStickinessPolicy, except that the lifetime of the
 * special Elastic Load Balancing cookie follows the lifetime of the
 * application-generated cookie specified in the policy configuration.
 * The LoadBalancer only inserts a new stickiness cookie when the
 * application response includes a new application cookie.
 * </p>
 * <p>
 * If the application cookie is explicitly removed or expires, the
 * session stops being sticky until a new application cookie is issued.
 * </p>
 * <p>
 * <b>NOTE:</b> An application client must receive and send two cookies:
 * the application-generated cookie and the special Elastic Load
 * Balancing cookie named AWSELB. This is the default behavior for many
 * common web browsers.
 * </p>
 *
 * @param createAppCookieStickinessPolicyRequest Container for the
 *           necessary parameters to execute the CreateAppCookieStickinessPolicy
 *           service method on AmazonElasticLoadBalancing.
 *
 * @return The response from the CreateAppCookieStickinessPolicy service
 *         method, as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingTooManyPoliciesException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 * @throws ElasticLoadBalancingDuplicatePolicyNameException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingCreateAppCookieStickinessPolicyResponse *)createAppCookieStickinessPolicy:(ElasticLoadBalancingCreateAppCookieStickinessPolicyRequest *)createAppCookieStickinessPolicyRequest;


/**
 * <p>
 * Deletes the specified LoadBalancer.
 * </p>
 * <p>
 * If attempting to recreate the LoadBalancer, the client must
 * reconfigure all the settings. The DNS name associated with a deleted
 * LoadBalancer will no longer be usable. Once deleted, the name and
 * associated DNS record of the LoadBalancer no longer exist and traffic
 * sent to any of its IP addresses will no longer be delivered to client
 * instances. The client will not receive the same DNS name even if a new
 * LoadBalancer with same LoadBalancerName is created.
 * </p>
 * <p>
 * To successfully call this API, the client must provide the same
 * account credentials as were used to create the LoadBalancer.
 * </p>
 * <p>
 * <b>NOTE:</b> By design, if the LoadBalancer does not exist or has
 * already been deleted, DeleteLoadBalancer still succeeds.
 * </p>
 *
 * @param deleteLoadBalancerRequest Container for the necessary
 *           parameters to execute the DeleteLoadBalancer service method on
 *           AmazonElasticLoadBalancing.
 *
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDeleteLoadBalancerResponse *)deleteLoadBalancer:(ElasticLoadBalancingDeleteLoadBalancerRequest *)deleteLoadBalancerRequest;


/**
 * <p>
 * Deletes a policy from the LoadBalancer. The specified policy must not
 * be enabled for any listeners.
 * </p>
 *
 * @param deleteLoadBalancerPolicyRequest Container for the necessary
 *           parameters to execute the DeleteLoadBalancerPolicy service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the DeleteLoadBalancerPolicy service method,
 *         as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDeleteLoadBalancerPolicyResponse *)deleteLoadBalancerPolicy:(ElasticLoadBalancingDeleteLoadBalancerPolicyRequest *)deleteLoadBalancerPolicyRequest;


/**
 * <p>
 * Returns the current state of the instances of the specified
 * LoadBalancer. If no instances are specified, the state of all the
 * instances for the LoadBalancer is returned.
 * </p>
 * <p>
 * <b>NOTE:</b> The client must have created the specified input
 * LoadBalancer in order to retrieve this information; the client must
 * provide the same account credentials as those that were used to create
 * the LoadBalancer.
 * </p>
 *
 * @param describeInstanceHealthRequest Container for the necessary
 *           parameters to execute the DescribeInstanceHealth service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the DescribeInstanceHealth service method,
 *         as returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingInvalidInstanceException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDescribeInstanceHealthResponse *)describeInstanceHealth:(ElasticLoadBalancingDescribeInstanceHealthRequest *)describeInstanceHealthRequest;


/**
 * <p>
 * Returns detailed configuration information for the specified
 * LoadBalancers. If no LoadBalancers are specified, the operation
 * returns configuration information for all LoadBalancers created by the
 * caller.
 * </p>
 * <p>
 * <b>NOTE:</b> The client must have created the specified input
 * LoadBalancers in order to retrieve this information; the client must
 * provide the same account credentials as those that were used to create
 * the LoadBalancer.
 * </p>
 *
 * @param describeLoadBalancersRequest Container for the necessary
 *           parameters to execute the DescribeLoadBalancers service method on
 *           AmazonElasticLoadBalancing.
 *
 * @return The response from the DescribeLoadBalancers service method, as
 *         returned by AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingDescribeLoadBalancersResponse *)describeLoadBalancers:(ElasticLoadBalancingDescribeLoadBalancersRequest *)describeLoadBalancersRequest;


/**
 * <p>
 * Creates one or more listeners on a LoadBalancer for the specified
 * port. If a listener with the given port does not already exist, it
 * will be created; otherwise, the properties of the new listener must
 * match the properties of the existing listener.
 * </p>
 *
 * @param createLoadBalancerListenersRequest Container for the necessary
 *           parameters to execute the CreateLoadBalancerListeners service method
 *           on AmazonElasticLoadBalancing.
 *
 * @throws ElasticLoadBalancingDuplicateListenerException
 * @throws ElasticLoadBalancingCertificateNotFoundException
 * @throws ElasticLoadBalancingLoadBalancerNotFoundException
 * @throws ElasticLoadBalancingInvalidConfigurationRequestException
 *
 * @throws AmazonClientException
 *             If any internal errors are encountered inside the client while
 *             attempting to make the request or handle the response.  For example
 *             if a network connection is not available.
 * @throws AmazonServiceException
 *             If an error response is returned by AmazonElasticLoadBalancing indicating
 *             either a problem with the data in the request, or a server side issue.
 */
-(ElasticLoadBalancingCreateLoadBalancerListenersResponse *)createLoadBalancerListeners:(ElasticLoadBalancingCreateLoadBalancerListenersRequest *)createLoadBalancerListenersRequest;



@end

