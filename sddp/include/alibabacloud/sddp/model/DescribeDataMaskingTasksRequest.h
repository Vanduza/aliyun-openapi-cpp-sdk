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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataMaskingTasksRequest : public RpcServiceRequest
			{

			public:
				DescribeDataMaskingTasksRequest();
				~DescribeDataMaskingTasksRequest();

				std::string getSearchKey()const;
				void setSearchKey(const std::string& searchKey);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				long getEndTime()const;
				void setEndTime(long endTime);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getDstType()const;
				void setDstType(int dstType);

            private:
				std::string searchKey_;
				long startTime_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int featureType_;
				long endTime_;
				int currentPage_;
				int dstType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSREQUEST_H_