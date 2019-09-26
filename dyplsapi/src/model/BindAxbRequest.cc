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

#include <alibabacloud/dyplsapi/model/BindAxbRequest.h>

using AlibabaCloud::Dyplsapi::Model::BindAxbRequest;

BindAxbRequest::BindAxbRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "BindAxb")
{}

BindAxbRequest::~BindAxbRequest()
{}

long BindAxbRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindAxbRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int BindAxbRequest::getCallDisplayType()const
{
	return callDisplayType_;
}

void BindAxbRequest::setCallDisplayType(int callDisplayType)
{
	callDisplayType_ = callDisplayType;
	setCoreParameter("CallDisplayType", std::to_string(callDisplayType));
}

std::string BindAxbRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindAxbRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BindAxbRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void BindAxbRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setCoreParameter("PhoneNoX", phoneNoX);
}

std::string BindAxbRequest::getRingConfig()const
{
	return ringConfig_;
}

void BindAxbRequest::setRingConfig(const std::string& ringConfig)
{
	ringConfig_ = ringConfig;
	setCoreParameter("RingConfig", ringConfig);
}

std::string BindAxbRequest::getPhoneNoB()const
{
	return phoneNoB_;
}

void BindAxbRequest::setPhoneNoB(const std::string& phoneNoB)
{
	phoneNoB_ = phoneNoB;
	setCoreParameter("PhoneNoB", phoneNoB);
}

std::string BindAxbRequest::getPhoneNoA()const
{
	return phoneNoA_;
}

void BindAxbRequest::setPhoneNoA(const std::string& phoneNoA)
{
	phoneNoA_ = phoneNoA;
	setCoreParameter("PhoneNoA", phoneNoA);
}

std::string BindAxbRequest::getExpectCity()const
{
	return expectCity_;
}

void BindAxbRequest::setExpectCity(const std::string& expectCity)
{
	expectCity_ = expectCity;
	setCoreParameter("ExpectCity", expectCity);
}

std::string BindAxbRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindAxbRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BindAxbRequest::getOwnerId()const
{
	return ownerId_;
}

void BindAxbRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BindAxbRequest::getOutOrderId()const
{
	return outOrderId_;
}

void BindAxbRequest::setOutOrderId(const std::string& outOrderId)
{
	outOrderId_ = outOrderId;
	setCoreParameter("OutOrderId", outOrderId);
}

std::string BindAxbRequest::getPoolKey()const
{
	return poolKey_;
}

void BindAxbRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setCoreParameter("PoolKey", poolKey);
}

std::string BindAxbRequest::getExpiration()const
{
	return expiration_;
}

void BindAxbRequest::setExpiration(const std::string& expiration)
{
	expiration_ = expiration;
	setCoreParameter("Expiration", expiration);
}

bool BindAxbRequest::getIsRecordingEnabled()const
{
	return isRecordingEnabled_;
}

void BindAxbRequest::setIsRecordingEnabled(bool isRecordingEnabled)
{
	isRecordingEnabled_ = isRecordingEnabled;
	setCoreParameter("IsRecordingEnabled", isRecordingEnabled ? "true" : "false");
}

std::string BindAxbRequest::getOutId()const
{
	return outId_;
}

void BindAxbRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setCoreParameter("OutId", outId);
}

