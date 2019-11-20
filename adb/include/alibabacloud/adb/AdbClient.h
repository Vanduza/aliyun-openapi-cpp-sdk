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

#ifndef ALIBABACLOUD_ADB_ADBCLIENT_H_
#define ALIBABACLOUD_ADB_ADBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AdbExport.h"
#include "model/AllocateClusterPublicConnectionRequest.h"
#include "model/AllocateClusterPublicConnectionResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAutoRenewAttributeRequest.h"
#include "model/DescribeAutoRenewAttributeResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeDBClusterAccessWhiteListRequest.h"
#include "model/DescribeDBClusterAccessWhiteListResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterNetInfoRequest.h"
#include "model/DescribeDBClusterNetInfoResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeOperatorPermissionRequest.h"
#include "model/DescribeOperatorPermissionResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSlowLogTrendRequest.h"
#include "model/DescribeSlowLogTrendResult.h"
#include "model/GrantOperatorPermissionRequest.h"
#include "model/GrantOperatorPermissionResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAutoRenewAttributeRequest.h"
#include "model/ModifyAutoRenewAttributeResult.h"
#include "model/ModifyDBClusterAccessWhiteListRequest.h"
#include "model/ModifyDBClusterAccessWhiteListResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ReleaseClusterPublicConnectionRequest.h"
#include "model/ReleaseClusterPublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RevokeOperatorPermissionRequest.h"
#include "model/RevokeOperatorPermissionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Adb
	{
		class ALIBABACLOUD_ADB_EXPORT AdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateClusterPublicConnectionResult> AllocateClusterPublicConnectionOutcome;
			typedef std::future<AllocateClusterPublicConnectionOutcome> AllocateClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::AllocateClusterPublicConnectionRequest&, const AllocateClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoRenewAttributeResult> DescribeAutoRenewAttributeOutcome;
			typedef std::future<DescribeAutoRenewAttributeOutcome> DescribeAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAutoRenewAttributeRequest&, const DescribeAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAccessWhiteListResult> DescribeDBClusterAccessWhiteListOutcome;
			typedef std::future<DescribeDBClusterAccessWhiteListOutcome> DescribeDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterAccessWhiteListRequest&, const DescribeDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterNetInfoResult> DescribeDBClusterNetInfoOutcome;
			typedef std::future<DescribeDBClusterNetInfoOutcome> DescribeDBClusterNetInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterNetInfoRequest&, const DescribeDBClusterNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperatorPermissionResult> DescribeOperatorPermissionOutcome;
			typedef std::future<DescribeOperatorPermissionOutcome> DescribeOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeOperatorPermissionRequest&, const DescribeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogTrendResult> DescribeSlowLogTrendOutcome;
			typedef std::future<DescribeSlowLogTrendOutcome> DescribeSlowLogTrendOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSlowLogTrendRequest&, const DescribeSlowLogTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTrendAsyncHandler;
			typedef Outcome<Error, Model::GrantOperatorPermissionResult> GrantOperatorPermissionOutcome;
			typedef std::future<GrantOperatorPermissionOutcome> GrantOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GrantOperatorPermissionRequest&, const GrantOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoRenewAttributeResult> ModifyAutoRenewAttributeOutcome;
			typedef std::future<ModifyAutoRenewAttributeOutcome> ModifyAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAutoRenewAttributeRequest&, const ModifyAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAccessWhiteListResult> ModifyDBClusterAccessWhiteListOutcome;
			typedef std::future<ModifyDBClusterAccessWhiteListOutcome> ModifyDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterAccessWhiteListRequest&, const ModifyDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterPublicConnectionResult> ReleaseClusterPublicConnectionOutcome;
			typedef std::future<ReleaseClusterPublicConnectionOutcome> ReleaseClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ReleaseClusterPublicConnectionRequest&, const ReleaseClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RevokeOperatorPermissionResult> RevokeOperatorPermissionOutcome;
			typedef std::future<RevokeOperatorPermissionOutcome> RevokeOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::RevokeOperatorPermissionRequest&, const RevokeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			AdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AdbClient();
			AllocateClusterPublicConnectionOutcome allocateClusterPublicConnection(const Model::AllocateClusterPublicConnectionRequest &request)const;
			void allocateClusterPublicConnectionAsync(const Model::AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateClusterPublicConnectionOutcomeCallable allocateClusterPublicConnectionCallable(const Model::AllocateClusterPublicConnectionRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAutoRenewAttributeOutcome describeAutoRenewAttribute(const Model::DescribeAutoRenewAttributeRequest &request)const;
			void describeAutoRenewAttributeAsync(const Model::DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoRenewAttributeOutcomeCallable describeAutoRenewAttributeCallable(const Model::DescribeAutoRenewAttributeRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeDBClusterAccessWhiteListOutcome describeDBClusterAccessWhiteList(const Model::DescribeDBClusterAccessWhiteListRequest &request)const;
			void describeDBClusterAccessWhiteListAsync(const Model::DescribeDBClusterAccessWhiteListRequest& request, const DescribeDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAccessWhiteListOutcomeCallable describeDBClusterAccessWhiteListCallable(const Model::DescribeDBClusterAccessWhiteListRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterNetInfoOutcome describeDBClusterNetInfo(const Model::DescribeDBClusterNetInfoRequest &request)const;
			void describeDBClusterNetInfoAsync(const Model::DescribeDBClusterNetInfoRequest& request, const DescribeDBClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterNetInfoOutcomeCallable describeDBClusterNetInfoCallable(const Model::DescribeDBClusterNetInfoRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeOperatorPermissionOutcome describeOperatorPermission(const Model::DescribeOperatorPermissionRequest &request)const;
			void describeOperatorPermissionAsync(const Model::DescribeOperatorPermissionRequest& request, const DescribeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOperatorPermissionOutcomeCallable describeOperatorPermissionCallable(const Model::DescribeOperatorPermissionRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSlowLogTrendOutcome describeSlowLogTrend(const Model::DescribeSlowLogTrendRequest &request)const;
			void describeSlowLogTrendAsync(const Model::DescribeSlowLogTrendRequest& request, const DescribeSlowLogTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogTrendOutcomeCallable describeSlowLogTrendCallable(const Model::DescribeSlowLogTrendRequest& request) const;
			GrantOperatorPermissionOutcome grantOperatorPermission(const Model::GrantOperatorPermissionRequest &request)const;
			void grantOperatorPermissionAsync(const Model::GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantOperatorPermissionOutcomeCallable grantOperatorPermissionCallable(const Model::GrantOperatorPermissionRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAutoRenewAttributeOutcome modifyAutoRenewAttribute(const Model::ModifyAutoRenewAttributeRequest &request)const;
			void modifyAutoRenewAttributeAsync(const Model::ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoRenewAttributeOutcomeCallable modifyAutoRenewAttributeCallable(const Model::ModifyAutoRenewAttributeRequest& request) const;
			ModifyDBClusterAccessWhiteListOutcome modifyDBClusterAccessWhiteList(const Model::ModifyDBClusterAccessWhiteListRequest &request)const;
			void modifyDBClusterAccessWhiteListAsync(const Model::ModifyDBClusterAccessWhiteListRequest& request, const ModifyDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAccessWhiteListOutcomeCallable modifyDBClusterAccessWhiteListCallable(const Model::ModifyDBClusterAccessWhiteListRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ReleaseClusterPublicConnectionOutcome releaseClusterPublicConnection(const Model::ReleaseClusterPublicConnectionRequest &request)const;
			void releaseClusterPublicConnectionAsync(const Model::ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterPublicConnectionOutcomeCallable releaseClusterPublicConnectionCallable(const Model::ReleaseClusterPublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RevokeOperatorPermissionOutcome revokeOperatorPermission(const Model::RevokeOperatorPermissionRequest &request)const;
			void revokeOperatorPermissionAsync(const Model::RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeOperatorPermissionOutcomeCallable revokeOperatorPermissionCallable(const Model::RevokeOperatorPermissionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADB_ADBCLIENT_H_