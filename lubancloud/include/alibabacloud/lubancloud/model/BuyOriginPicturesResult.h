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

#ifndef ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESRESULT_H_
#define ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lubancloud/LubancloudExport.h>

namespace AlibabaCloud
{
	namespace Lubancloud
	{
		namespace Model
		{
			class ALIBABACLOUD_LUBANCLOUD_EXPORT BuyOriginPicturesResult : public ServiceResult
			{
			public:
				struct Picture
				{
					long id;
					std::string originalPictureUrl;
				};


				BuyOriginPicturesResult();
				explicit BuyOriginPicturesResult(const std::string &payload);
				~BuyOriginPicturesResult();
				std::vector<Picture> getPictures()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Picture> pictures_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LUBANCLOUD_MODEL_BUYORIGINPICTURESRESULT_H_