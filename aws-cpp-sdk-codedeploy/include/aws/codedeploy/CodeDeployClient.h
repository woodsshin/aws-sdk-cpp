﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codedeploy/model/BatchGetApplicationRevisionsResult.h>
#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentInstancesResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentsResult.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/CreateApplicationResult.h>
#include <aws/codedeploy/model/CreateDeploymentResult.h>
#include <aws/codedeploy/model/CreateDeploymentConfigResult.h>
#include <aws/codedeploy/model/CreateDeploymentGroupResult.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetApplicationResult.h>
#include <aws/codedeploy/model/GetApplicationRevisionResult.h>
#include <aws/codedeploy/model/GetDeploymentResult.h>
#include <aws/codedeploy/model/GetDeploymentConfigResult.h>
#include <aws/codedeploy/model/GetDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetDeploymentInstanceResult.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceResult.h>
#include <aws/codedeploy/model/ListApplicationRevisionsResult.h>
#include <aws/codedeploy/model/ListApplicationsResult.h>
#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>
#include <aws/codedeploy/model/ListDeploymentGroupsResult.h>
#include <aws/codedeploy/model/ListDeploymentInstancesResult.h>
#include <aws/codedeploy/model/ListDeploymentsResult.h>
#include <aws/codedeploy/model/ListGitHubAccountTokenNamesResult.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/StopDeploymentResult.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeDeploy
{

namespace Model
{
        class AddTagsToOnPremisesInstancesRequest;
        class BatchGetApplicationRevisionsRequest;
        class BatchGetApplicationsRequest;
        class BatchGetDeploymentGroupsRequest;
        class BatchGetDeploymentInstancesRequest;
        class BatchGetDeploymentsRequest;
        class BatchGetOnPremisesInstancesRequest;
        class ContinueDeploymentRequest;
        class CreateApplicationRequest;
        class CreateDeploymentRequest;
        class CreateDeploymentConfigRequest;
        class CreateDeploymentGroupRequest;
        class DeleteApplicationRequest;
        class DeleteDeploymentConfigRequest;
        class DeleteDeploymentGroupRequest;
        class DeregisterOnPremisesInstanceRequest;
        class GetApplicationRequest;
        class GetApplicationRevisionRequest;
        class GetDeploymentRequest;
        class GetDeploymentConfigRequest;
        class GetDeploymentGroupRequest;
        class GetDeploymentInstanceRequest;
        class GetOnPremisesInstanceRequest;
        class ListApplicationRevisionsRequest;
        class ListApplicationsRequest;
        class ListDeploymentConfigsRequest;
        class ListDeploymentGroupsRequest;
        class ListDeploymentInstancesRequest;
        class ListDeploymentsRequest;
        class ListGitHubAccountTokenNamesRequest;
        class ListOnPremisesInstancesRequest;
        class RegisterApplicationRevisionRequest;
        class RegisterOnPremisesInstanceRequest;
        class RemoveTagsFromOnPremisesInstancesRequest;
        class SkipWaitTimeForInstanceTerminationRequest;
        class StopDeploymentRequest;
        class UpdateApplicationRequest;
        class UpdateDeploymentGroupRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> AddTagsToOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<BatchGetApplicationRevisionsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetApplicationRevisionsOutcome;
        typedef Aws::Utils::Outcome<BatchGetApplicationsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetApplicationsOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentGroupsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentGroupsOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentInstancesOutcome;
        typedef Aws::Utils::Outcome<BatchGetDeploymentsResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetDeploymentsOutcome;
        typedef Aws::Utils::Outcome<BatchGetOnPremisesInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> BatchGetOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> ContinueDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<CodeDeployErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentConfigResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> CreateDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> DeleteDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> DeregisterOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, Aws::Client::AWSError<CodeDeployErrors>> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetApplicationRevisionResult, Aws::Client::AWSError<CodeDeployErrors>> GetApplicationRevisionOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentConfigResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentConfigOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentGroupOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentInstanceResult, Aws::Client::AWSError<CodeDeployErrors>> GetDeploymentInstanceOutcome;
        typedef Aws::Utils::Outcome<GetOnPremisesInstanceResult, Aws::Client::AWSError<CodeDeployErrors>> GetOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<ListApplicationRevisionsResult, Aws::Client::AWSError<CodeDeployErrors>> ListApplicationRevisionsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<CodeDeployErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentConfigsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentConfigsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentGroupsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentGroupsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentInstancesOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, Aws::Client::AWSError<CodeDeployErrors>> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListGitHubAccountTokenNamesResult, Aws::Client::AWSError<CodeDeployErrors>> ListGitHubAccountTokenNamesOutcome;
        typedef Aws::Utils::Outcome<ListOnPremisesInstancesResult, Aws::Client::AWSError<CodeDeployErrors>> ListOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> RegisterApplicationRevisionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> RegisterOnPremisesInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> RemoveTagsFromOnPremisesInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> SkipWaitTimeForInstanceTerminationOutcome;
        typedef Aws::Utils::Outcome<StopDeploymentResult, Aws::Client::AWSError<CodeDeployErrors>> StopDeploymentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeDeployErrors>> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateDeploymentGroupResult, Aws::Client::AWSError<CodeDeployErrors>> UpdateDeploymentGroupOutcome;

        typedef std::future<AddTagsToOnPremisesInstancesOutcome> AddTagsToOnPremisesInstancesOutcomeCallable;
        typedef std::future<BatchGetApplicationRevisionsOutcome> BatchGetApplicationRevisionsOutcomeCallable;
        typedef std::future<BatchGetApplicationsOutcome> BatchGetApplicationsOutcomeCallable;
        typedef std::future<BatchGetDeploymentGroupsOutcome> BatchGetDeploymentGroupsOutcomeCallable;
        typedef std::future<BatchGetDeploymentInstancesOutcome> BatchGetDeploymentInstancesOutcomeCallable;
        typedef std::future<BatchGetDeploymentsOutcome> BatchGetDeploymentsOutcomeCallable;
        typedef std::future<BatchGetOnPremisesInstancesOutcome> BatchGetOnPremisesInstancesOutcomeCallable;
        typedef std::future<ContinueDeploymentOutcome> ContinueDeploymentOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateDeploymentConfigOutcome> CreateDeploymentConfigOutcomeCallable;
        typedef std::future<CreateDeploymentGroupOutcome> CreateDeploymentGroupOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteDeploymentConfigOutcome> DeleteDeploymentConfigOutcomeCallable;
        typedef std::future<DeleteDeploymentGroupOutcome> DeleteDeploymentGroupOutcomeCallable;
        typedef std::future<DeregisterOnPremisesInstanceOutcome> DeregisterOnPremisesInstanceOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetApplicationRevisionOutcome> GetApplicationRevisionOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<GetDeploymentConfigOutcome> GetDeploymentConfigOutcomeCallable;
        typedef std::future<GetDeploymentGroupOutcome> GetDeploymentGroupOutcomeCallable;
        typedef std::future<GetDeploymentInstanceOutcome> GetDeploymentInstanceOutcomeCallable;
        typedef std::future<GetOnPremisesInstanceOutcome> GetOnPremisesInstanceOutcomeCallable;
        typedef std::future<ListApplicationRevisionsOutcome> ListApplicationRevisionsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListDeploymentConfigsOutcome> ListDeploymentConfigsOutcomeCallable;
        typedef std::future<ListDeploymentGroupsOutcome> ListDeploymentGroupsOutcomeCallable;
        typedef std::future<ListDeploymentInstancesOutcome> ListDeploymentInstancesOutcomeCallable;
        typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
        typedef std::future<ListGitHubAccountTokenNamesOutcome> ListGitHubAccountTokenNamesOutcomeCallable;
        typedef std::future<ListOnPremisesInstancesOutcome> ListOnPremisesInstancesOutcomeCallable;
        typedef std::future<RegisterApplicationRevisionOutcome> RegisterApplicationRevisionOutcomeCallable;
        typedef std::future<RegisterOnPremisesInstanceOutcome> RegisterOnPremisesInstanceOutcomeCallable;
        typedef std::future<RemoveTagsFromOnPremisesInstancesOutcome> RemoveTagsFromOnPremisesInstancesOutcomeCallable;
        typedef std::future<SkipWaitTimeForInstanceTerminationOutcome> SkipWaitTimeForInstanceTerminationOutcomeCallable;
        typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateDeploymentGroupOutcome> UpdateDeploymentGroupOutcomeCallable;
} // namespace Model

  class CodeDeployClient;

    typedef std::function<void(const CodeDeployClient*, const Model::AddTagsToOnPremisesInstancesRequest&, const Model::AddTagsToOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationRevisionsRequest&, const Model::BatchGetApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationsRequest&, const Model::BatchGetApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentGroupsRequest&, const Model::BatchGetDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentInstancesRequest&, const Model::BatchGetDeploymentInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentsRequest&, const Model::BatchGetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetOnPremisesInstancesRequest&, const Model::BatchGetOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ContinueDeploymentRequest&, const Model::ContinueDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContinueDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentConfigRequest&, const Model::CreateDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentGroupRequest&, const Model::CreateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentConfigRequest&, const Model::DeleteDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentGroupRequest&, const Model::DeleteDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeregisterOnPremisesInstanceRequest&, const Model::DeregisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRevisionRequest&, const Model::GetApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentConfigRequest&, const Model::GetDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentGroupRequest&, const Model::GetDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentInstanceRequest&, const Model::GetDeploymentInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetOnPremisesInstanceRequest&, const Model::GetOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationRevisionsRequest&, const Model::ListApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentConfigsRequest&, const Model::ListDeploymentConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentConfigsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentGroupsRequest&, const Model::ListDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentInstancesRequest&, const Model::ListDeploymentInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListGitHubAccountTokenNamesRequest&, const Model::ListGitHubAccountTokenNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGitHubAccountTokenNamesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListOnPremisesInstancesRequest&, const Model::ListOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterApplicationRevisionRequest&, const Model::RegisterApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterOnPremisesInstanceRequest&, const Model::RegisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RemoveTagsFromOnPremisesInstancesRequest&, const Model::RemoveTagsFromOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::SkipWaitTimeForInstanceTerminationRequest&, const Model::SkipWaitTimeForInstanceTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SkipWaitTimeForInstanceTerminationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateDeploymentGroupRequest&, const Model::UpdateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentGroupResponseReceivedHandler;

  /**
   * <fullname>AWS CodeDeploy</fullname> <p>AWS CodeDeploy is a deployment service
   * that automates application deployments to Amazon EC2 instances or on-premises
   * instances running in your own facility.</p> <p>You can deploy a nearly unlimited
   * variety of application content, such as code, web and configuration files,
   * executables, packages, scripts, multimedia files, and so on. AWS CodeDeploy can
   * deploy application content stored in Amazon S3 buckets, GitHub repositories, or
   * Bitbucket repositories. You do not need to make changes to your existing code
   * before you can use AWS CodeDeploy.</p> <p>AWS CodeDeploy makes it easier for you
   * to rapidly release new features, helps you avoid downtime during application
   * deployment, and handles the complexity of updating your applications, without
   * many of the risks associated with error-prone manual deployments.</p> <p> <b>AWS
   * CodeDeploy Components</b> </p> <p>Use the information in this guide to help you
   * work with the following AWS CodeDeploy components:</p> <ul> <li> <p>
   * <b>Application</b>: A name that uniquely identifies the application you want to
   * deploy. AWS CodeDeploy uses this name, which functions as a container, to ensure
   * the correct combination of revision, deployment configuration, and deployment
   * group are referenced during a deployment.</p> </li> <li> <p> <b>Deployment
   * group</b>: A set of individual instances. A deployment group contains
   * individually tagged instances, Amazon EC2 instances in Auto Scaling groups, or
   * both. </p> </li> <li> <p> <b>Deployment configuration</b>: A set of deployment
   * rules and deployment success and failure conditions used by AWS CodeDeploy
   * during a deployment.</p> </li> <li> <p> <b>Deployment</b>: The process, and the
   * components involved in the process, of installing content on one or more
   * instances. </p> </li> <li> <p> <b>Application revisions</b>: An archive file
   * containing source content—source code, web pages, executable files, and
   * deployment scripts—along with an application specification file (AppSpec file).
   * Revisions are stored in Amazon S3 buckets or GitHub repositories. For Amazon S3,
   * a revision is uniquely identified by its Amazon S3 object key and its ETag,
   * version, or both. For GitHub, a revision is uniquely identified by its commit
   * ID.</p> </li> </ul> <p>This guide also contains information to help you get
   * details about the instances in your deployments and to make on-premises
   * instances available for AWS CodeDeploy deployments.</p> <p> <b>AWS CodeDeploy
   * Information Resources</b> </p> <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy
   * User Guide</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/codedeploy/latest/APIReference/">AWS CodeDeploy
   * API Reference Guide</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/cli/latest/reference/deploy/index.html">AWS CLI
   * Reference for AWS CodeDeploy</a> </p> </li> <li> <p> <a
   * href="https://forums.aws.amazon.com/forum.jspa?forumID=179">AWS CodeDeploy
   * Developer Forum</a> </p> </li> </ul>
   */
  class AWS_CODEDEPLOY_API CodeDeployClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeDeployClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeDeployClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeDeployClient();


        /**
         * <p>Adds tags to on-premises instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AddTagsToOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcome AddTagsToOnPremisesInstances(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * <p>Adds tags to on-premises instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AddTagsToOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToOnPremisesInstancesOutcomeCallable AddTagsToOnPremisesInstancesCallable(const Model::AddTagsToOnPremisesInstancesRequest& request) const;

        /**
         * <p>Adds tags to on-premises instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AddTagsToOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToOnPremisesInstancesAsync(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more application revisions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetApplicationRevisionsOutcome BatchGetApplicationRevisions(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * <p>Gets information about one or more application revisions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationRevisionsOutcomeCallable BatchGetApplicationRevisionsCallable(const Model::BatchGetApplicationRevisionsRequest& request) const;

        /**
         * <p>Gets information about one or more application revisions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplicationRevisions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationRevisionsAsync(const Model::BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetApplicationsOutcome BatchGetApplications(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * <p>Gets information about one or more applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetApplicationsOutcomeCallable BatchGetApplicationsCallable(const Model::BatchGetApplicationsRequest& request) const;

        /**
         * <p>Gets information about one or more applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetApplicationsAsync(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more deployment groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentGroupsOutcome BatchGetDeploymentGroups(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * <p>Gets information about one or more deployment groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentGroupsOutcomeCallable BatchGetDeploymentGroupsCallable(const Model::BatchGetDeploymentGroupsRequest& request) const;

        /**
         * <p>Gets information about one or more deployment groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentGroupsAsync(const Model::BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentInstancesOutcome BatchGetDeploymentInstances(const Model::BatchGetDeploymentInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentInstancesOutcomeCallable BatchGetDeploymentInstancesCallable(const Model::BatchGetDeploymentInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more instance that are part of a deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentInstancesAsync(const Model::BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDeploymentsOutcome BatchGetDeployments(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about one or more deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDeploymentsOutcomeCallable BatchGetDeploymentsCallable(const Model::BatchGetDeploymentsRequest& request) const;

        /**
         * <p>Gets information about one or more deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDeploymentsAsync(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetOnPremisesInstancesOutcome BatchGetOnPremisesInstances(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetOnPremisesInstancesOutcomeCallable BatchGetOnPremisesInstancesCallable(const Model::BatchGetOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets information about one or more on-premises instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetOnPremisesInstancesAsync(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a blue/green deployment, starts the process of rerouting traffic from
         * instances in the original environment to instances in the replacement
         * environment without waiting for a specified wait time to elapse. (Traffic
         * rerouting, which is achieved by registering instances in the replacement
         * environment with the load balancer, can start as soon as all instances have a
         * status of Ready.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ContinueDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::ContinueDeploymentOutcome ContinueDeployment(const Model::ContinueDeploymentRequest& request) const;

        /**
         * <p>For a blue/green deployment, starts the process of rerouting traffic from
         * instances in the original environment to instances in the replacement
         * environment without waiting for a specified wait time to elapse. (Traffic
         * rerouting, which is achieved by registering instances in the replacement
         * environment with the load balancer, can start as soon as all instances have a
         * status of Ready.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ContinueDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContinueDeploymentOutcomeCallable ContinueDeploymentCallable(const Model::ContinueDeploymentRequest& request) const;

        /**
         * <p>For a blue/green deployment, starts the process of rerouting traffic from
         * instances in the original environment to instances in the replacement
         * environment without waiting for a specified wait time to elapse. (Traffic
         * rerouting, which is achieved by registering instances in the replacement
         * environment with the load balancer, can start as soon as all instances have a
         * status of Ready.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ContinueDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContinueDeploymentAsync(const Model::ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys an application revision through the specified deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Deploys an application revision through the specified deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Deploys an application revision through the specified deployment
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentConfigOutcome CreateDeploymentConfig(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * <p>Creates a deployment configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentConfigOutcomeCallable CreateDeploymentConfigCallable(const Model::CreateDeploymentConfigRequest& request) const;

        /**
         * <p>Creates a deployment configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentConfigAsync(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentGroupOutcome CreateDeploymentGroup(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentGroupOutcomeCallable CreateDeploymentGroupCallable(const Model::CreateDeploymentGroupRequest& request) const;

        /**
         * <p>Creates a deployment group to which application revisions will be
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentGroupAsync(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentConfigOutcome DeleteDeploymentConfig(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentConfigOutcomeCallable DeleteDeploymentConfigCallable(const Model::DeleteDeploymentConfigRequest& request) const;

        /**
         * <p>Deletes a deployment configuration.</p> <note> <p>A deployment configuration
         * cannot be deleted if it is currently in use. Predefined configurations cannot be
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentConfigAsync(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentGroupOutcome DeleteDeploymentGroup(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * <p>Deletes a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentGroupOutcomeCallable DeleteDeploymentGroupCallable(const Model::DeleteDeploymentGroupRequest& request) const;

        /**
         * <p>Deletes a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentGroupAsync(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOnPremisesInstanceOutcome DeregisterOnPremisesInstance(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Deregisters an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterOnPremisesInstanceOutcomeCallable DeregisterOnPremisesInstanceCallable(const Model::DeregisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Deregisters an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeregisterOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterOnPremisesInstanceAsync(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Gets information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an application revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationRevisionOutcome GetApplicationRevision(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * <p>Gets information about an application revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationRevisionOutcomeCallable GetApplicationRevisionCallable(const Model::GetApplicationRevisionRequest& request) const;

        /**
         * <p>Gets information about an application revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationRevisionAsync(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets information about a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentConfigOutcome GetDeploymentConfig(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * <p>Gets information about a deployment configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentConfigOutcomeCallable GetDeploymentConfigCallable(const Model::GetDeploymentConfigRequest& request) const;

        /**
         * <p>Gets information about a deployment configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentConfigAsync(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentGroupOutcome GetDeploymentGroup(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * <p>Gets information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentGroupOutcomeCallable GetDeploymentGroupCallable(const Model::GetDeploymentGroupRequest& request) const;

        /**
         * <p>Gets information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentGroupAsync(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentInstanceOutcome GetDeploymentInstance(const Model::GetDeploymentInstanceRequest& request) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentInstanceOutcomeCallable GetDeploymentInstanceCallable(const Model::GetDeploymentInstanceRequest& request) const;

        /**
         * <p>Gets information about an instance as part of a deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentInstanceAsync(const Model::GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOnPremisesInstanceOutcome GetOnPremisesInstance(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * <p>Gets information about an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOnPremisesInstanceOutcomeCallable GetOnPremisesInstanceCallable(const Model::GetOnPremisesInstanceRequest& request) const;

        /**
         * <p>Gets information about an on-premises instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOnPremisesInstanceAsync(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about revisions for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationRevisionsOutcome ListApplicationRevisions(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * <p>Lists information about revisions for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationRevisionsOutcomeCallable ListApplicationRevisionsCallable(const Model::ListApplicationRevisionsRequest& request) const;

        /**
         * <p>Lists information about revisions for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationRevisions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationRevisionsAsync(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the applications registered with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentConfigsOutcome ListDeploymentConfigs(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentConfigsOutcomeCallable ListDeploymentConfigsCallable(const Model::ListDeploymentConfigsRequest& request) const;

        /**
         * <p>Lists the deployment configurations with the applicable IAM user or AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentConfigsAsync(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentGroupsOutcome ListDeploymentGroups(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentGroupsOutcomeCallable ListDeploymentGroupsCallable(const Model::ListDeploymentGroupsRequest& request) const;

        /**
         * <p>Lists the deployment groups for an application registered with the applicable
         * IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentGroupsAsync(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentInstancesOutcome ListDeploymentInstances(const Model::ListDeploymentInstancesRequest& request) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentInstancesOutcomeCallable ListDeploymentInstancesCallable(const Model::ListDeploymentInstancesRequest& request) const;

        /**
         * <p>Lists the instance for a deployment associated with the applicable IAM user
         * or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentInstancesAsync(const Model::ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments in a deployment group for an application registered
         * with the applicable IAM user or AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of stored connections to GitHub accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListGitHubAccountTokenNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGitHubAccountTokenNamesOutcome ListGitHubAccountTokenNames(const Model::ListGitHubAccountTokenNamesRequest& request) const;

        /**
         * <p>Lists the names of stored connections to GitHub accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListGitHubAccountTokenNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGitHubAccountTokenNamesOutcomeCallable ListGitHubAccountTokenNamesCallable(const Model::ListGitHubAccountTokenNamesRequest& request) const;

        /**
         * <p>Lists the names of stored connections to GitHub accounts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListGitHubAccountTokenNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGitHubAccountTokenNamesAsync(const Model::ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOnPremisesInstancesOutcome ListOnPremisesInstances(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOnPremisesInstancesOutcomeCallable ListOnPremisesInstancesCallable(const Model::ListOnPremisesInstancesRequest& request) const;

        /**
         * <p>Gets a list of names for one or more on-premises instances.</p> <p>Unless
         * otherwise specified, both registered and deregistered on-premises instance names
         * will be listed. To list only registered or deregistered on-premises instance
         * names, use the registration status parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOnPremisesInstancesAsync(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterApplicationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterApplicationRevisionOutcome RegisterApplicationRevision(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterApplicationRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterApplicationRevisionOutcomeCallable RegisterApplicationRevisionCallable(const Model::RegisterApplicationRevisionRequest& request) const;

        /**
         * <p>Registers with AWS CodeDeploy a revision for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterApplicationRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterApplicationRevisionAsync(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an on-premises instance.</p> <note> <p>Only one IAM ARN (an IAM
         * session ARN or IAM user ARN) is supported in the request. You cannot use
         * both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterOnPremisesInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOnPremisesInstanceOutcome RegisterOnPremisesInstance(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Registers an on-premises instance.</p> <note> <p>Only one IAM ARN (an IAM
         * session ARN or IAM user ARN) is supported in the request. You cannot use
         * both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterOnPremisesInstanceOutcomeCallable RegisterOnPremisesInstanceCallable(const Model::RegisterOnPremisesInstanceRequest& request) const;

        /**
         * <p>Registers an on-premises instance.</p> <note> <p>Only one IAM ARN (an IAM
         * session ARN or IAM user ARN) is supported in the request. You cannot use
         * both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RegisterOnPremisesInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterOnPremisesInstanceAsync(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from one or more on-premises
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RemoveTagsFromOnPremisesInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcome RemoveTagsFromOnPremisesInstances(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * <p>Removes one or more tags from one or more on-premises
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RemoveTagsFromOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromOnPremisesInstancesOutcomeCallable RemoveTagsFromOnPremisesInstancesCallable(const Model::RemoveTagsFromOnPremisesInstancesRequest& request) const;

        /**
         * <p>Removes one or more tags from one or more on-premises
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RemoveTagsFromOnPremisesInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromOnPremisesInstancesAsync(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>In a blue/green deployment, overrides any specified wait time and starts
         * terminating instances immediately after the traffic routing is
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/SkipWaitTimeForInstanceTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::SkipWaitTimeForInstanceTerminationOutcome SkipWaitTimeForInstanceTermination(const Model::SkipWaitTimeForInstanceTerminationRequest& request) const;

        /**
         * <p>In a blue/green deployment, overrides any specified wait time and starts
         * terminating instances immediately after the traffic routing is
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/SkipWaitTimeForInstanceTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SkipWaitTimeForInstanceTerminationOutcomeCallable SkipWaitTimeForInstanceTerminationCallable(const Model::SkipWaitTimeForInstanceTerminationRequest& request) const;

        /**
         * <p>In a blue/green deployment, overrides any specified wait time and starts
         * terminating instances immediately after the traffic routing is
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/SkipWaitTimeForInstanceTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SkipWaitTimeForInstanceTerminationAsync(const Model::SkipWaitTimeForInstanceTerminationRequest& request, const SkipWaitTimeForInstanceTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Attempts to stop an ongoing deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the name of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Changes the name of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Changes the name of an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentGroupOutcome UpdateDeploymentGroup(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * <p>Changes information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentGroupOutcomeCallable UpdateDeploymentGroupCallable(const Model::UpdateDeploymentGroupRequest& request) const;

        /**
         * <p>Changes information about a deployment group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentGroupAsync(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToOnPremisesInstancesAsyncHelper(const Model::AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetApplicationRevisionsAsyncHelper(const Model::BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetApplicationsAsyncHelper(const Model::BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentGroupsAsyncHelper(const Model::BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentInstancesAsyncHelper(const Model::BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDeploymentsAsyncHelper(const Model::BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetOnPremisesInstancesAsyncHelper(const Model::BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ContinueDeploymentAsyncHelper(const Model::ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentConfigAsyncHelper(const Model::CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentGroupAsyncHelper(const Model::CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentConfigAsyncHelper(const Model::DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentGroupAsyncHelper(const Model::DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterOnPremisesInstanceAsyncHelper(const Model::DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationRevisionAsyncHelper(const Model::GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentConfigAsyncHelper(const Model::GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentGroupAsyncHelper(const Model::GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentInstanceAsyncHelper(const Model::GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOnPremisesInstanceAsyncHelper(const Model::GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationRevisionsAsyncHelper(const Model::ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentConfigsAsyncHelper(const Model::ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentGroupsAsyncHelper(const Model::ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentInstancesAsyncHelper(const Model::ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGitHubAccountTokenNamesAsyncHelper(const Model::ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOnPremisesInstancesAsyncHelper(const Model::ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterApplicationRevisionAsyncHelper(const Model::RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterOnPremisesInstanceAsyncHelper(const Model::RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromOnPremisesInstancesAsyncHelper(const Model::RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SkipWaitTimeForInstanceTerminationAsyncHelper(const Model::SkipWaitTimeForInstanceTerminationRequest& request, const SkipWaitTimeForInstanceTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDeploymentAsyncHelper(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeploymentGroupAsyncHelper(const Model::UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeDeploy
} // namespace Aws
