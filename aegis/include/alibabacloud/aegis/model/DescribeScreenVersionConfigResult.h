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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENVERSIONCONFIGRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENVERSIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeScreenVersionConfigResult : public ServiceResult
			{
			public:


				DescribeScreenVersionConfigResult();
				explicit DescribeScreenVersionConfigResult(const std::string &payload);
				~DescribeScreenVersionConfigResult();
				int getAssetLevel()const;
				std::string getInstanceId()const;
				long getCreateTime()const;
				int getLogTime()const;
				int getSasScreen()const;
				bool getIsSasOpening()const;
				int getLogCapacity()const;
				int getFlag()const;
				int getSasLog()const;
				long getReleaseTime()const;
				int getVersion()const;
				int getAvdsFlag()const;
				int getIsTrialVersion()const;

			protected:
				void parse(const std::string &payload);
			private:
				int assetLevel_;
				std::string instanceId_;
				long createTime_;
				int logTime_;
				int sasScreen_;
				bool isSasOpening_;
				int logCapacity_;
				int flag_;
				int sasLog_;
				long releaseTime_;
				int version_;
				int avdsFlag_;
				int isTrialVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENVERSIONCONFIGRESULT_H_