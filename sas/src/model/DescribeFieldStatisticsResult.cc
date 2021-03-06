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

#include <alibabacloud/sas/model/DescribeFieldStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeFieldStatisticsResult::DescribeFieldStatisticsResult() :
	ServiceResult()
{}

DescribeFieldStatisticsResult::DescribeFieldStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFieldStatisticsResult::~DescribeFieldStatisticsResult()
{}

void DescribeFieldStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupedFieldsNode = value["GroupedFields"];
	if(!groupedFieldsNode["RiskInstanceCount"].isNull())
		groupedFields_.riskInstanceCount = std::stoi(groupedFieldsNode["RiskInstanceCount"].asString());
	if(!groupedFieldsNode["InstanceCount"].isNull())
		groupedFields_.instanceCount = std::stoi(groupedFieldsNode["InstanceCount"].asString());
	if(!groupedFieldsNode["NewInstanceCount"].isNull())
		groupedFields_.newInstanceCount = std::stoi(groupedFieldsNode["NewInstanceCount"].asString());
	if(!groupedFieldsNode["RegionCount"].isNull())
		groupedFields_.regionCount = std::stoi(groupedFieldsNode["RegionCount"].asString());
	if(!groupedFieldsNode["UnprotectedInstanceCount"].isNull())
		groupedFields_.unprotectedInstanceCount = std::stoi(groupedFieldsNode["UnprotectedInstanceCount"].asString());
	if(!groupedFieldsNode["VpcCount"].isNull())
		groupedFields_.vpcCount = std::stoi(groupedFieldsNode["VpcCount"].asString());
	if(!groupedFieldsNode["GroupCount"].isNull())
		groupedFields_.groupCount = std::stoi(groupedFieldsNode["GroupCount"].asString());
	if(!groupedFieldsNode["NotRunningStatusCount"].isNull())
		groupedFields_.notRunningStatusCount = std::stoi(groupedFieldsNode["NotRunningStatusCount"].asString());
	if(!groupedFieldsNode["OfflineInstanceCount"].isNull())
		groupedFields_.offlineInstanceCount = std::stoi(groupedFieldsNode["OfflineInstanceCount"].asString());

}

DescribeFieldStatisticsResult::GroupedFields DescribeFieldStatisticsResult::getGroupedFields()const
{
	return groupedFields_;
}

