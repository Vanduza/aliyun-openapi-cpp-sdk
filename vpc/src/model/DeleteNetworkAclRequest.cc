/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/vpc/model/DeleteNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNetworkAclRequest;

DeleteNetworkAclRequest::DeleteNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteNetworkAcl")
{}

DeleteNetworkAclRequest::~DeleteNetworkAclRequest()
{}

long DeleteNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long DeleteNetworkAclRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteNetworkAclRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteNetworkAclRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteNetworkAclRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteNetworkAclRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteNetworkAclRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteNetworkAclRequest::getCallerType()const
{
	return callerType_;
}

void DeleteNetworkAclRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteNetworkAclRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteNetworkAclRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteNetworkAclRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNetworkAclRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNetworkAclRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteNetworkAclRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool DeleteNetworkAclRequest::getEnable()const
{
	return enable_;
}

void DeleteNetworkAclRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteNetworkAclRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteNetworkAclRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteNetworkAclRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteNetworkAclRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void DeleteNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string DeleteNetworkAclRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteNetworkAclRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteNetworkAclRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteNetworkAclRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteNetworkAclRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteNetworkAclRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNetworkAclRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteNetworkAclRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteNetworkAclRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteNetworkAclRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteNetworkAclRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteNetworkAclRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteNetworkAclRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteNetworkAclRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteNetworkAclRequest::getRequestId()const
{
	return requestId_;
}

void DeleteNetworkAclRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}
