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

#include <alibabacloud/kms/KmsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

namespace
{
	const std::string SERVICE_NAME = "Kms";
}

KmsClient::KmsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::~KmsClient()
{}

KmsClient::AsymmetricDecryptOutcome KmsClient::asymmetricDecrypt(const AsymmetricDecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricDecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricDecryptOutcome(AsymmetricDecryptResult(outcome.result()));
	else
		return AsymmetricDecryptOutcome(outcome.error());
}

void KmsClient::asymmetricDecryptAsync(const AsymmetricDecryptRequest& request, const AsymmetricDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricDecrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricDecryptOutcomeCallable KmsClient::asymmetricDecryptCallable(const AsymmetricDecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricDecryptOutcome()>>(
			[this, request]()
			{
			return this->asymmetricDecrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricEncryptOutcome KmsClient::asymmetricEncrypt(const AsymmetricEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricEncryptOutcome(AsymmetricEncryptResult(outcome.result()));
	else
		return AsymmetricEncryptOutcome(outcome.error());
}

void KmsClient::asymmetricEncryptAsync(const AsymmetricEncryptRequest& request, const AsymmetricEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricEncryptOutcomeCallable KmsClient::asymmetricEncryptCallable(const AsymmetricEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricEncryptOutcome()>>(
			[this, request]()
			{
			return this->asymmetricEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricSignOutcome KmsClient::asymmetricSign(const AsymmetricSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricSignOutcome(AsymmetricSignResult(outcome.result()));
	else
		return AsymmetricSignOutcome(outcome.error());
}

void KmsClient::asymmetricSignAsync(const AsymmetricSignRequest& request, const AsymmetricSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricSignOutcomeCallable KmsClient::asymmetricSignCallable(const AsymmetricSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricSignOutcome()>>(
			[this, request]()
			{
			return this->asymmetricSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricVerifyOutcome KmsClient::asymmetricVerify(const AsymmetricVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricVerifyOutcome(AsymmetricVerifyResult(outcome.result()));
	else
		return AsymmetricVerifyOutcome(outcome.error());
}

void KmsClient::asymmetricVerifyAsync(const AsymmetricVerifyRequest& request, const AsymmetricVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricVerifyOutcomeCallable KmsClient::asymmetricVerifyCallable(const AsymmetricVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricVerifyOutcome()>>(
			[this, request]()
			{
			return this->asymmetricVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CancelKeyDeletionOutcome KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelKeyDeletionOutcome(CancelKeyDeletionResult(outcome.result()));
	else
		return CancelKeyDeletionOutcome(outcome.error());
}

void KmsClient::cancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CancelKeyDeletionOutcomeCallable KmsClient::cancelKeyDeletionCallable(const CancelKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->cancelKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateAliasOutcome KmsClient::createAlias(const CreateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliasOutcome(CreateAliasResult(outcome.result()));
	else
		return CreateAliasOutcome(outcome.error());
}

void KmsClient::createAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateAliasOutcomeCallable KmsClient::createAliasCallable(const CreateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliasOutcome()>>(
			[this, request]()
			{
			return this->createAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateKeyOutcome KmsClient::createKey(const CreateKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyOutcome(CreateKeyResult(outcome.result()));
	else
		return CreateKeyOutcome(outcome.error());
}

void KmsClient::createKeyAsync(const CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateKeyOutcomeCallable KmsClient::createKeyCallable(const CreateKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyOutcome()>>(
			[this, request]()
			{
			return this->createKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateKeyVersionOutcome KmsClient::createKeyVersion(const CreateKeyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyVersionOutcome(CreateKeyVersionResult(outcome.result()));
	else
		return CreateKeyVersionOutcome(outcome.error());
}

void KmsClient::createKeyVersionAsync(const CreateKeyVersionRequest& request, const CreateKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateKeyVersionOutcomeCallable KmsClient::createKeyVersionCallable(const CreateKeyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyVersionOutcome()>>(
			[this, request]()
			{
			return this->createKeyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateSecretOutcome KmsClient::createSecret(const CreateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretOutcome(CreateSecretResult(outcome.result()));
	else
		return CreateSecretOutcome(outcome.error());
}

void KmsClient::createSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateSecretOutcomeCallable KmsClient::createSecretCallable(const CreateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
			[this, request]()
			{
			return this->createSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DecryptOutcome KmsClient::decrypt(const DecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecryptOutcome(DecryptResult(outcome.result()));
	else
		return DecryptOutcome(outcome.error());
}

void KmsClient::decryptAsync(const DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DecryptOutcomeCallable KmsClient::decryptCallable(const DecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecryptOutcome()>>(
			[this, request]()
			{
			return this->decrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteAliasOutcome KmsClient::deleteAlias(const DeleteAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAliasOutcome(DeleteAliasResult(outcome.result()));
	else
		return DeleteAliasOutcome(outcome.error());
}

void KmsClient::deleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteAliasOutcomeCallable KmsClient::deleteAliasCallable(const DeleteAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAliasOutcome()>>(
			[this, request]()
			{
			return this->deleteAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteKeyMaterialOutcome KmsClient::deleteKeyMaterial(const DeleteKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeyMaterialOutcome(DeleteKeyMaterialResult(outcome.result()));
	else
		return DeleteKeyMaterialOutcome(outcome.error());
}

void KmsClient::deleteKeyMaterialAsync(const DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteKeyMaterialOutcomeCallable KmsClient::deleteKeyMaterialCallable(const DeleteKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteSecretOutcome KmsClient::deleteSecret(const DeleteSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretOutcome(DeleteSecretResult(outcome.result()));
	else
		return DeleteSecretOutcome(outcome.error());
}

void KmsClient::deleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteSecretOutcomeCallable KmsClient::deleteSecretCallable(const DeleteSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeKeyOutcome KmsClient::describeKey(const DescribeKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyOutcome(DescribeKeyResult(outcome.result()));
	else
		return DescribeKeyOutcome(outcome.error());
}

void KmsClient::describeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeKeyOutcomeCallable KmsClient::describeKeyCallable(const DescribeKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyOutcome()>>(
			[this, request]()
			{
			return this->describeKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeKeyVersionOutcome KmsClient::describeKeyVersion(const DescribeKeyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyVersionOutcome(DescribeKeyVersionResult(outcome.result()));
	else
		return DescribeKeyVersionOutcome(outcome.error());
}

void KmsClient::describeKeyVersionAsync(const DescribeKeyVersionRequest& request, const DescribeKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeKeyVersionOutcomeCallable KmsClient::describeKeyVersionCallable(const DescribeKeyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyVersionOutcome()>>(
			[this, request]()
			{
			return this->describeKeyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeRegionsOutcome KmsClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void KmsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeRegionsOutcomeCallable KmsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeSecretOutcome KmsClient::describeSecret(const DescribeSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecretOutcome(DescribeSecretResult(outcome.result()));
	else
		return DescribeSecretOutcome(outcome.error());
}

void KmsClient::describeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeSecretOutcomeCallable KmsClient::describeSecretCallable(const DescribeSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecretOutcome()>>(
			[this, request]()
			{
			return this->describeSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeServiceOutcome KmsClient::describeService(const DescribeServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceOutcome(DescribeServiceResult(outcome.result()));
	else
		return DescribeServiceOutcome(outcome.error());
}

void KmsClient::describeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeServiceOutcomeCallable KmsClient::describeServiceCallable(const DescribeServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceOutcome()>>(
			[this, request]()
			{
			return this->describeService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DisableKeyOutcome KmsClient::disableKey(const DisableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableKeyOutcome(DisableKeyResult(outcome.result()));
	else
		return DisableKeyOutcome(outcome.error());
}

void KmsClient::disableKeyAsync(const DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DisableKeyOutcomeCallable KmsClient::disableKeyCallable(const DisableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableKeyOutcome()>>(
			[this, request]()
			{
			return this->disableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EnableKeyOutcome KmsClient::enableKey(const EnableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableKeyOutcome(EnableKeyResult(outcome.result()));
	else
		return EnableKeyOutcome(outcome.error());
}

void KmsClient::enableKeyAsync(const EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EnableKeyOutcomeCallable KmsClient::enableKeyCallable(const EnableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableKeyOutcome()>>(
			[this, request]()
			{
			return this->enableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EncryptOutcome KmsClient::encrypt(const EncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncryptOutcome(EncryptResult(outcome.result()));
	else
		return EncryptOutcome(outcome.error());
}

void KmsClient::encryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EncryptOutcomeCallable KmsClient::encryptCallable(const EncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
			[this, request]()
			{
			return this->encrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateDataKeyOutcome KmsClient::generateDataKey(const GenerateDataKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDataKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDataKeyOutcome(GenerateDataKeyResult(outcome.result()));
	else
		return GenerateDataKeyOutcome(outcome.error());
}

void KmsClient::generateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDataKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateDataKeyOutcomeCallable KmsClient::generateDataKeyCallable(const GenerateDataKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDataKeyOutcome()>>(
			[this, request]()
			{
			return this->generateDataKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateDataKeyWithoutPlaintextOutcome KmsClient::generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDataKeyWithoutPlaintextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDataKeyWithoutPlaintextOutcome(GenerateDataKeyWithoutPlaintextResult(outcome.result()));
	else
		return GenerateDataKeyWithoutPlaintextOutcome(outcome.error());
}

void KmsClient::generateDataKeyWithoutPlaintextAsync(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDataKeyWithoutPlaintext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateDataKeyWithoutPlaintextOutcomeCallable KmsClient::generateDataKeyWithoutPlaintextCallable(const GenerateDataKeyWithoutPlaintextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDataKeyWithoutPlaintextOutcome()>>(
			[this, request]()
			{
			return this->generateDataKeyWithoutPlaintext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetParametersForImportOutcome KmsClient::getParametersForImport(const GetParametersForImportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParametersForImportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParametersForImportOutcome(GetParametersForImportResult(outcome.result()));
	else
		return GetParametersForImportOutcome(outcome.error());
}

void KmsClient::getParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParametersForImport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetParametersForImportOutcomeCallable KmsClient::getParametersForImportCallable(const GetParametersForImportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParametersForImportOutcome()>>(
			[this, request]()
			{
			return this->getParametersForImport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetPublicKeyOutcome KmsClient::getPublicKey(const GetPublicKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPublicKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPublicKeyOutcome(GetPublicKeyResult(outcome.result()));
	else
		return GetPublicKeyOutcome(outcome.error());
}

void KmsClient::getPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPublicKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetPublicKeyOutcomeCallable KmsClient::getPublicKeyCallable(const GetPublicKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPublicKeyOutcome()>>(
			[this, request]()
			{
			return this->getPublicKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetRandomPasswordOutcome KmsClient::getRandomPassword(const GetRandomPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRandomPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRandomPasswordOutcome(GetRandomPasswordResult(outcome.result()));
	else
		return GetRandomPasswordOutcome(outcome.error());
}

void KmsClient::getRandomPasswordAsync(const GetRandomPasswordRequest& request, const GetRandomPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRandomPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetRandomPasswordOutcomeCallable KmsClient::getRandomPasswordCallable(const GetRandomPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRandomPasswordOutcome()>>(
			[this, request]()
			{
			return this->getRandomPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetSecretValueOutcome KmsClient::getSecretValue(const GetSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretValueOutcome(GetSecretValueResult(outcome.result()));
	else
		return GetSecretValueOutcome(outcome.error());
}

void KmsClient::getSecretValueAsync(const GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetSecretValueOutcomeCallable KmsClient::getSecretValueCallable(const GetSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretValueOutcome()>>(
			[this, request]()
			{
			return this->getSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ImportKeyMaterialOutcome KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeyMaterialOutcome(ImportKeyMaterialResult(outcome.result()));
	else
		return ImportKeyMaterialOutcome(outcome.error());
}

void KmsClient::importKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ImportKeyMaterialOutcomeCallable KmsClient::importKeyMaterialCallable(const ImportKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->importKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListAliasesOutcome KmsClient::listAliases(const ListAliasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesOutcome(ListAliasesResult(outcome.result()));
	else
		return ListAliasesOutcome(outcome.error());
}

void KmsClient::listAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesOutcomeCallable KmsClient::listAliasesCallable(const ListAliasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesOutcome()>>(
			[this, request]()
			{
			return this->listAliases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListAliasesByKeyIdOutcome KmsClient::listAliasesByKeyId(const ListAliasesByKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesByKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesByKeyIdOutcome(ListAliasesByKeyIdResult(outcome.result()));
	else
		return ListAliasesByKeyIdOutcome(outcome.error());
}

void KmsClient::listAliasesByKeyIdAsync(const ListAliasesByKeyIdRequest& request, const ListAliasesByKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliasesByKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesByKeyIdOutcomeCallable KmsClient::listAliasesByKeyIdCallable(const ListAliasesByKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesByKeyIdOutcome()>>(
			[this, request]()
			{
			return this->listAliasesByKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKeyVersionsOutcome KmsClient::listKeyVersions(const ListKeyVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeyVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeyVersionsOutcome(ListKeyVersionsResult(outcome.result()));
	else
		return ListKeyVersionsOutcome(outcome.error());
}

void KmsClient::listKeyVersionsAsync(const ListKeyVersionsRequest& request, const ListKeyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeyVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKeyVersionsOutcomeCallable KmsClient::listKeyVersionsCallable(const ListKeyVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeyVersionsOutcome()>>(
			[this, request]()
			{
			return this->listKeyVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKeysOutcome KmsClient::listKeys(const ListKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeysOutcome(ListKeysResult(outcome.result()));
	else
		return ListKeysOutcome(outcome.error());
}

void KmsClient::listKeysAsync(const ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKeysOutcomeCallable KmsClient::listKeysCallable(const ListKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeysOutcome()>>(
			[this, request]()
			{
			return this->listKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListResourceTagsOutcome KmsClient::listResourceTags(const ListResourceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTagsOutcome(ListResourceTagsResult(outcome.result()));
	else
		return ListResourceTagsOutcome(outcome.error());
}

void KmsClient::listResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListResourceTagsOutcomeCallable KmsClient::listResourceTagsCallable(const ListResourceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTagsOutcome()>>(
			[this, request]()
			{
			return this->listResourceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListSecretVersionIdsOutcome KmsClient::listSecretVersionIds(const ListSecretVersionIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretVersionIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretVersionIdsOutcome(ListSecretVersionIdsResult(outcome.result()));
	else
		return ListSecretVersionIdsOutcome(outcome.error());
}

void KmsClient::listSecretVersionIdsAsync(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecretVersionIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListSecretVersionIdsOutcomeCallable KmsClient::listSecretVersionIdsCallable(const ListSecretVersionIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretVersionIdsOutcome()>>(
			[this, request]()
			{
			return this->listSecretVersionIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListSecretsOutcome KmsClient::listSecrets(const ListSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretsOutcome(ListSecretsResult(outcome.result()));
	else
		return ListSecretsOutcome(outcome.error());
}

void KmsClient::listSecretsAsync(const ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListSecretsOutcomeCallable KmsClient::listSecretsCallable(const ListSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretsOutcome()>>(
			[this, request]()
			{
			return this->listSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::PutSecretValueOutcome KmsClient::putSecretValue(const PutSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutSecretValueOutcome(PutSecretValueResult(outcome.result()));
	else
		return PutSecretValueOutcome(outcome.error());
}

void KmsClient::putSecretValueAsync(const PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::PutSecretValueOutcomeCallable KmsClient::putSecretValueCallable(const PutSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutSecretValueOutcome()>>(
			[this, request]()
			{
			return this->putSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::RestoreSecretOutcome KmsClient::restoreSecret(const RestoreSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreSecretOutcome(RestoreSecretResult(outcome.result()));
	else
		return RestoreSecretOutcome(outcome.error());
}

void KmsClient::restoreSecretAsync(const RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::RestoreSecretOutcomeCallable KmsClient::restoreSecretCallable(const RestoreSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreSecretOutcome()>>(
			[this, request]()
			{
			return this->restoreSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ScheduleKeyDeletionOutcome KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScheduleKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScheduleKeyDeletionOutcome(ScheduleKeyDeletionResult(outcome.result()));
	else
		return ScheduleKeyDeletionOutcome(outcome.error());
}

void KmsClient::scheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scheduleKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ScheduleKeyDeletionOutcomeCallable KmsClient::scheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScheduleKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->scheduleKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::TagResourceOutcome KmsClient::tagResource(const TagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourceOutcome(TagResourceResult(outcome.result()));
	else
		return TagResourceOutcome(outcome.error());
}

void KmsClient::tagResourceAsync(const TagResourceRequest& request, const TagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::TagResourceOutcomeCallable KmsClient::tagResourceCallable(const TagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourceOutcome()>>(
			[this, request]()
			{
			return this->tagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UntagResourceOutcome KmsClient::untagResource(const UntagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourceOutcome(UntagResourceResult(outcome.result()));
	else
		return UntagResourceOutcome(outcome.error());
}

void KmsClient::untagResourceAsync(const UntagResourceRequest& request, const UntagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UntagResourceOutcomeCallable KmsClient::untagResourceCallable(const UntagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourceOutcome()>>(
			[this, request]()
			{
			return this->untagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateAliasOutcome KmsClient::updateAlias(const UpdateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAliasOutcome(UpdateAliasResult(outcome.result()));
	else
		return UpdateAliasOutcome(outcome.error());
}

void KmsClient::updateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateAliasOutcomeCallable KmsClient::updateAliasCallable(const UpdateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
			[this, request]()
			{
			return this->updateAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateKeyDescriptionOutcome KmsClient::updateKeyDescription(const UpdateKeyDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKeyDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKeyDescriptionOutcome(UpdateKeyDescriptionResult(outcome.result()));
	else
		return UpdateKeyDescriptionOutcome(outcome.error());
}

void KmsClient::updateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKeyDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateKeyDescriptionOutcomeCallable KmsClient::updateKeyDescriptionCallable(const UpdateKeyDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKeyDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateKeyDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateRotationPolicyOutcome KmsClient::updateRotationPolicy(const UpdateRotationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRotationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRotationPolicyOutcome(UpdateRotationPolicyResult(outcome.result()));
	else
		return UpdateRotationPolicyOutcome(outcome.error());
}

void KmsClient::updateRotationPolicyAsync(const UpdateRotationPolicyRequest& request, const UpdateRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRotationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateRotationPolicyOutcomeCallable KmsClient::updateRotationPolicyCallable(const UpdateRotationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRotationPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateRotationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateSecretOutcome KmsClient::updateSecret(const UpdateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretOutcome(UpdateSecretResult(outcome.result()));
	else
		return UpdateSecretOutcome(outcome.error());
}

void KmsClient::updateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateSecretOutcomeCallable KmsClient::updateSecretCallable(const UpdateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretOutcome()>>(
			[this, request]()
			{
			return this->updateSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateSecretVersionStageOutcome KmsClient::updateSecretVersionStage(const UpdateSecretVersionStageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretVersionStageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretVersionStageOutcome(UpdateSecretVersionStageResult(outcome.result()));
	else
		return UpdateSecretVersionStageOutcome(outcome.error());
}

void KmsClient::updateSecretVersionStageAsync(const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecretVersionStage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateSecretVersionStageOutcomeCallable KmsClient::updateSecretVersionStageCallable(const UpdateSecretVersionStageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretVersionStageOutcome()>>(
			[this, request]()
			{
			return this->updateSecretVersionStage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

