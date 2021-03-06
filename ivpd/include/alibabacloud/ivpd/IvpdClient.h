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

#ifndef ALIBABACLOUD_IVPD_IVPDCLIENT_H_
#define ALIBABACLOUD_IVPD_IVPDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IvpdExport.h"
#include "model/ChangeImageSizeRequest.h"
#include "model/ChangeImageSizeResult.h"
#include "model/CreateSegmentBodyJobRequest.h"
#include "model/CreateSegmentBodyJobResult.h"
#include "model/DetectImageElementsRequest.h"
#include "model/DetectImageElementsResult.h"
#include "model/ExtendImageStyleRequest.h"
#include "model/ExtendImageStyleResult.h"
#include "model/GetJobResultRequest.h"
#include "model/GetJobResultResult.h"
#include "model/GetJobStatusRequest.h"
#include "model/GetJobStatusResult.h"
#include "model/GetRenderResultRequest.h"
#include "model/GetRenderResultResult.h"
#include "model/ListPackageDesignModelTypesRequest.h"
#include "model/ListPackageDesignModelTypesResult.h"
#include "model/MakeSuperResolutionImageRequest.h"
#include "model/MakeSuperResolutionImageResult.h"
#include "model/PreviewModelForPackageDesignRequest.h"
#include "model/PreviewModelForPackageDesignResult.h"
#include "model/RecognizeImageColorRequest.h"
#include "model/RecognizeImageColorResult.h"
#include "model/RecognizeImageStyleRequest.h"
#include "model/RecognizeImageStyleResult.h"
#include "model/RecolorImageRequest.h"
#include "model/RecolorImageResult.h"
#include "model/RenderImageForPackageDesignRequest.h"
#include "model/RenderImageForPackageDesignResult.h"
#include "model/SegmentBodyRequest.h"
#include "model/SegmentBodyResult.h"
#include "model/SegmentImageRequest.h"
#include "model/SegmentImageResult.h"


namespace AlibabaCloud
{
	namespace Ivpd
	{
		class ALIBABACLOUD_IVPD_EXPORT IvpdClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChangeImageSizeResult> ChangeImageSizeOutcome;
			typedef std::future<ChangeImageSizeOutcome> ChangeImageSizeOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::ChangeImageSizeRequest&, const ChangeImageSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeImageSizeAsyncHandler;
			typedef Outcome<Error, Model::CreateSegmentBodyJobResult> CreateSegmentBodyJobOutcome;
			typedef std::future<CreateSegmentBodyJobOutcome> CreateSegmentBodyJobOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::CreateSegmentBodyJobRequest&, const CreateSegmentBodyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSegmentBodyJobAsyncHandler;
			typedef Outcome<Error, Model::DetectImageElementsResult> DetectImageElementsOutcome;
			typedef std::future<DetectImageElementsOutcome> DetectImageElementsOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::DetectImageElementsRequest&, const DetectImageElementsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageElementsAsyncHandler;
			typedef Outcome<Error, Model::ExtendImageStyleResult> ExtendImageStyleOutcome;
			typedef std::future<ExtendImageStyleOutcome> ExtendImageStyleOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::ExtendImageStyleRequest&, const ExtendImageStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtendImageStyleAsyncHandler;
			typedef Outcome<Error, Model::GetJobResultResult> GetJobResultOutcome;
			typedef std::future<GetJobResultOutcome> GetJobResultOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::GetJobResultRequest&, const GetJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobResultAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusResult> GetJobStatusOutcome;
			typedef std::future<GetJobStatusOutcome> GetJobStatusOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::GetJobStatusRequest&, const GetJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetRenderResultResult> GetRenderResultOutcome;
			typedef std::future<GetRenderResultOutcome> GetRenderResultOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::GetRenderResultRequest&, const GetRenderResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRenderResultAsyncHandler;
			typedef Outcome<Error, Model::ListPackageDesignModelTypesResult> ListPackageDesignModelTypesOutcome;
			typedef std::future<ListPackageDesignModelTypesOutcome> ListPackageDesignModelTypesOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::ListPackageDesignModelTypesRequest&, const ListPackageDesignModelTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPackageDesignModelTypesAsyncHandler;
			typedef Outcome<Error, Model::MakeSuperResolutionImageResult> MakeSuperResolutionImageOutcome;
			typedef std::future<MakeSuperResolutionImageOutcome> MakeSuperResolutionImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::MakeSuperResolutionImageRequest&, const MakeSuperResolutionImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MakeSuperResolutionImageAsyncHandler;
			typedef Outcome<Error, Model::PreviewModelForPackageDesignResult> PreviewModelForPackageDesignOutcome;
			typedef std::future<PreviewModelForPackageDesignOutcome> PreviewModelForPackageDesignOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::PreviewModelForPackageDesignRequest&, const PreviewModelForPackageDesignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewModelForPackageDesignAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageColorResult> RecognizeImageColorOutcome;
			typedef std::future<RecognizeImageColorOutcome> RecognizeImageColorOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecognizeImageColorRequest&, const RecognizeImageColorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageColorAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageStyleResult> RecognizeImageStyleOutcome;
			typedef std::future<RecognizeImageStyleOutcome> RecognizeImageStyleOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecognizeImageStyleRequest&, const RecognizeImageStyleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageStyleAsyncHandler;
			typedef Outcome<Error, Model::RecolorImageResult> RecolorImageOutcome;
			typedef std::future<RecolorImageOutcome> RecolorImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RecolorImageRequest&, const RecolorImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecolorImageAsyncHandler;
			typedef Outcome<Error, Model::RenderImageForPackageDesignResult> RenderImageForPackageDesignOutcome;
			typedef std::future<RenderImageForPackageDesignOutcome> RenderImageForPackageDesignOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::RenderImageForPackageDesignRequest&, const RenderImageForPackageDesignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenderImageForPackageDesignAsyncHandler;
			typedef Outcome<Error, Model::SegmentBodyResult> SegmentBodyOutcome;
			typedef std::future<SegmentBodyOutcome> SegmentBodyOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::SegmentBodyRequest&, const SegmentBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SegmentBodyAsyncHandler;
			typedef Outcome<Error, Model::SegmentImageResult> SegmentImageOutcome;
			typedef std::future<SegmentImageOutcome> SegmentImageOutcomeCallable;
			typedef std::function<void(const IvpdClient*, const Model::SegmentImageRequest&, const SegmentImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SegmentImageAsyncHandler;

			IvpdClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IvpdClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IvpdClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IvpdClient();
			ChangeImageSizeOutcome changeImageSize(const Model::ChangeImageSizeRequest &request)const;
			void changeImageSizeAsync(const Model::ChangeImageSizeRequest& request, const ChangeImageSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeImageSizeOutcomeCallable changeImageSizeCallable(const Model::ChangeImageSizeRequest& request) const;
			CreateSegmentBodyJobOutcome createSegmentBodyJob(const Model::CreateSegmentBodyJobRequest &request)const;
			void createSegmentBodyJobAsync(const Model::CreateSegmentBodyJobRequest& request, const CreateSegmentBodyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSegmentBodyJobOutcomeCallable createSegmentBodyJobCallable(const Model::CreateSegmentBodyJobRequest& request) const;
			DetectImageElementsOutcome detectImageElements(const Model::DetectImageElementsRequest &request)const;
			void detectImageElementsAsync(const Model::DetectImageElementsRequest& request, const DetectImageElementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageElementsOutcomeCallable detectImageElementsCallable(const Model::DetectImageElementsRequest& request) const;
			ExtendImageStyleOutcome extendImageStyle(const Model::ExtendImageStyleRequest &request)const;
			void extendImageStyleAsync(const Model::ExtendImageStyleRequest& request, const ExtendImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtendImageStyleOutcomeCallable extendImageStyleCallable(const Model::ExtendImageStyleRequest& request) const;
			GetJobResultOutcome getJobResult(const Model::GetJobResultRequest &request)const;
			void getJobResultAsync(const Model::GetJobResultRequest& request, const GetJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobResultOutcomeCallable getJobResultCallable(const Model::GetJobResultRequest& request) const;
			GetJobStatusOutcome getJobStatus(const Model::GetJobStatusRequest &request)const;
			void getJobStatusAsync(const Model::GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusOutcomeCallable getJobStatusCallable(const Model::GetJobStatusRequest& request) const;
			GetRenderResultOutcome getRenderResult(const Model::GetRenderResultRequest &request)const;
			void getRenderResultAsync(const Model::GetRenderResultRequest& request, const GetRenderResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRenderResultOutcomeCallable getRenderResultCallable(const Model::GetRenderResultRequest& request) const;
			ListPackageDesignModelTypesOutcome listPackageDesignModelTypes(const Model::ListPackageDesignModelTypesRequest &request)const;
			void listPackageDesignModelTypesAsync(const Model::ListPackageDesignModelTypesRequest& request, const ListPackageDesignModelTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPackageDesignModelTypesOutcomeCallable listPackageDesignModelTypesCallable(const Model::ListPackageDesignModelTypesRequest& request) const;
			MakeSuperResolutionImageOutcome makeSuperResolutionImage(const Model::MakeSuperResolutionImageRequest &request)const;
			void makeSuperResolutionImageAsync(const Model::MakeSuperResolutionImageRequest& request, const MakeSuperResolutionImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MakeSuperResolutionImageOutcomeCallable makeSuperResolutionImageCallable(const Model::MakeSuperResolutionImageRequest& request) const;
			PreviewModelForPackageDesignOutcome previewModelForPackageDesign(const Model::PreviewModelForPackageDesignRequest &request)const;
			void previewModelForPackageDesignAsync(const Model::PreviewModelForPackageDesignRequest& request, const PreviewModelForPackageDesignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewModelForPackageDesignOutcomeCallable previewModelForPackageDesignCallable(const Model::PreviewModelForPackageDesignRequest& request) const;
			RecognizeImageColorOutcome recognizeImageColor(const Model::RecognizeImageColorRequest &request)const;
			void recognizeImageColorAsync(const Model::RecognizeImageColorRequest& request, const RecognizeImageColorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageColorOutcomeCallable recognizeImageColorCallable(const Model::RecognizeImageColorRequest& request) const;
			RecognizeImageStyleOutcome recognizeImageStyle(const Model::RecognizeImageStyleRequest &request)const;
			void recognizeImageStyleAsync(const Model::RecognizeImageStyleRequest& request, const RecognizeImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageStyleOutcomeCallable recognizeImageStyleCallable(const Model::RecognizeImageStyleRequest& request) const;
			RecolorImageOutcome recolorImage(const Model::RecolorImageRequest &request)const;
			void recolorImageAsync(const Model::RecolorImageRequest& request, const RecolorImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecolorImageOutcomeCallable recolorImageCallable(const Model::RecolorImageRequest& request) const;
			RenderImageForPackageDesignOutcome renderImageForPackageDesign(const Model::RenderImageForPackageDesignRequest &request)const;
			void renderImageForPackageDesignAsync(const Model::RenderImageForPackageDesignRequest& request, const RenderImageForPackageDesignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenderImageForPackageDesignOutcomeCallable renderImageForPackageDesignCallable(const Model::RenderImageForPackageDesignRequest& request) const;
			SegmentBodyOutcome segmentBody(const Model::SegmentBodyRequest &request)const;
			void segmentBodyAsync(const Model::SegmentBodyRequest& request, const SegmentBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SegmentBodyOutcomeCallable segmentBodyCallable(const Model::SegmentBodyRequest& request) const;
			SegmentImageOutcome segmentImage(const Model::SegmentImageRequest &request)const;
			void segmentImageAsync(const Model::SegmentImageRequest& request, const SegmentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SegmentImageOutcomeCallable segmentImageCallable(const Model::SegmentImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IVPD_IVPDCLIENT_H_
