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

#include <alibabacloud/dyplsapi/model/BuySecretNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::BuySecretNoRequest;

BuySecretNoRequest::BuySecretNoRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "BuySecretNo")
{}

BuySecretNoRequest::~BuySecretNoRequest()
{}

long BuySecretNoRequest::getSpecId()const
{
	return specId_;
}

void BuySecretNoRequest::setSpecId(long specId)
{
	specId_ = specId;
	setCoreParameter("SpecId", std::to_string(specId));
}

long BuySecretNoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BuySecretNoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BuySecretNoRequest::getCity()const
{
	return city_;
}

void BuySecretNoRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

std::string BuySecretNoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BuySecretNoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BuySecretNoRequest::getSecretNo()const
{
	return secretNo_;
}

void BuySecretNoRequest::setSecretNo(const std::string& secretNo)
{
	secretNo_ = secretNo;
	setCoreParameter("SecretNo", secretNo);
}

std::string BuySecretNoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BuySecretNoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool BuySecretNoRequest::getDisplayPool()const
{
	return displayPool_;
}

void BuySecretNoRequest::setDisplayPool(bool displayPool)
{
	displayPool_ = displayPool;
	setCoreParameter("DisplayPool", displayPool ? "true" : "false");
}

long BuySecretNoRequest::getOwnerId()const
{
	return ownerId_;
}

void BuySecretNoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BuySecretNoRequest::getPoolKey()const
{
	return poolKey_;
}

void BuySecretNoRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setCoreParameter("PoolKey", poolKey);
}

