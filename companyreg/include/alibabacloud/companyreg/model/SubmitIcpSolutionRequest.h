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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_SUBMITICPSOLUTIONREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_SUBMITICPSOLUTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT SubmitIcpSolutionRequest : public RpcServiceRequest
			{

			public:
				SubmitIcpSolutionRequest();
				~SubmitIcpSolutionRequest();

				std::string getArea()const;
				void setArea(const std::string& area);
				std::string getIntentionBizId()const;
				void setIntentionBizId(const std::string& intentionBizId);
				int getIcpType()const;
				void setIcpType(int icpType);
				std::string getCompanyAddress()const;
				void setCompanyAddress(const std::string& companyAddress);
				std::string getCompanyName()const;
				void setCompanyName(const std::string& companyName);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string area_;
				std::string intentionBizId_;
				int icpType_;
				std::string companyAddress_;
				std::string companyName_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_SUBMITICPSOLUTIONREQUEST_H_