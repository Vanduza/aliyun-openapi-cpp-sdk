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

#include <alibabacloud/outboundbot/model/AssignJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::AssignJobsRequest;

AssignJobsRequest::AssignJobsRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "AssignJobs")
{
	setMethod(HttpRequest::Method::Post);
}

AssignJobsRequest::~AssignJobsRequest()
{}

std::vector<std::string> AssignJobsRequest::getJobsJson()const
{
	return jobsJson_;
}

void AssignJobsRequest::setJobsJson(const std::vector<std::string>& jobsJson)
{
	jobsJson_ = jobsJson;
	for(int dep1 = 0; dep1!= jobsJson.size(); dep1++) {
		setParameter("JobsJson."+ std::to_string(dep1), jobsJson.at(dep1));
	}
}

std::vector<std::string> AssignJobsRequest::getCallingNumber()const
{
	return callingNumber_;
}

void AssignJobsRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int dep1 = 0; dep1!= callingNumber.size(); dep1++) {
		setParameter("CallingNumber."+ std::to_string(dep1), callingNumber.at(dep1));
	}
}

std::string AssignJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void AssignJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AssignJobsRequest::getStrategyJson()const
{
	return strategyJson_;
}

void AssignJobsRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setParameter("StrategyJson", strategyJson);
}

std::string AssignJobsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void AssignJobsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

