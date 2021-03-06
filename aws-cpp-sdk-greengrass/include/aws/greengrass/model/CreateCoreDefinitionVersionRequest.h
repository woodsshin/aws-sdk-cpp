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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Core.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateCoreDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateCoreDefinitionVersionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateCoreDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * core definition Id
     */
    inline const Aws::String& GetCoreDefinitionId() const{ return m_coreDefinitionId; }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(const Aws::String& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = value; }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(Aws::String&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::move(value); }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(const char* value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId.assign(value); }

    /**
     * core definition Id
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(const Aws::String& value) { SetCoreDefinitionId(value); return *this;}

    /**
     * core definition Id
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(Aws::String&& value) { SetCoreDefinitionId(std::move(value)); return *this;}

    /**
     * core definition Id
     */
    inline CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(const char* value) { SetCoreDefinitionId(value); return *this;}


    /**
     * Cores in the definition version.
     */
    inline const Aws::Vector<Core>& GetCores() const{ return m_cores; }

    /**
     * Cores in the definition version.
     */
    inline void SetCores(const Aws::Vector<Core>& value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * Cores in the definition version.
     */
    inline void SetCores(Aws::Vector<Core>&& value) { m_coresHasBeenSet = true; m_cores = std::move(value); }

    /**
     * Cores in the definition version.
     */
    inline CreateCoreDefinitionVersionRequest& WithCores(const Aws::Vector<Core>& value) { SetCores(value); return *this;}

    /**
     * Cores in the definition version.
     */
    inline CreateCoreDefinitionVersionRequest& WithCores(Aws::Vector<Core>&& value) { SetCores(std::move(value)); return *this;}

    /**
     * Cores in the definition version.
     */
    inline CreateCoreDefinitionVersionRequest& AddCores(const Core& value) { m_coresHasBeenSet = true; m_cores.push_back(value); return *this; }

    /**
     * Cores in the definition version.
     */
    inline CreateCoreDefinitionVersionRequest& AddCores(Core&& value) { m_coresHasBeenSet = true; m_cores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet;

    Aws::Vector<Core> m_cores;
    bool m_coresHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
