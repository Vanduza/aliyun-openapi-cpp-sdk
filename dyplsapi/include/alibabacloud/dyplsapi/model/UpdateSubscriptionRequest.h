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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_UPDATESUBSCRIPTIONREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_UPDATESUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT UpdateSubscriptionRequest : public RpcServiceRequest
			{

			public:
				UpdateSubscriptionRequest();
				~UpdateSubscriptionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getCallDisplayType()const;
				void setCallDisplayType(int callDisplayType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getSubsId()const;
				void setSubsId(const std::string& subsId);
				std::string getPhoneNoX()const;
				void setPhoneNoX(const std::string& phoneNoX);
				std::string getRingConfig()const;
				void setRingConfig(const std::string& ringConfig);
				std::string getPhoneNoB()const;
				void setPhoneNoB(const std::string& phoneNoB);
				std::string getPhoneNoA()const;
				void setPhoneNoA(const std::string& phoneNoA);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPoolKey()const;
				void setPoolKey(const std::string& poolKey);
				std::string getExpiration()const;
				void setExpiration(const std::string& expiration);
				std::string getOutId()const;
				void setOutId(const std::string& outId);
				bool getIsRecordingEnabled()const;
				void setIsRecordingEnabled(bool isRecordingEnabled);
				std::string getOperateType()const;
				void setOperateType(const std::string& operateType);
				std::string getCallRestrict()const;
				void setCallRestrict(const std::string& callRestrict);

            private:
				long resourceOwnerId_;
				int callDisplayType_;
				std::string accessKeyId_;
				std::string productType_;
				std::string subsId_;
				std::string phoneNoX_;
				std::string ringConfig_;
				std::string phoneNoB_;
				std::string phoneNoA_;
				std::string resourceOwnerAccount_;
				std::string groupId_;
				long ownerId_;
				std::string poolKey_;
				std::string expiration_;
				std::string outId_;
				bool isRecordingEnabled_;
				std::string operateType_;
				std::string callRestrict_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_UPDATESUBSCRIPTIONREQUEST_H_