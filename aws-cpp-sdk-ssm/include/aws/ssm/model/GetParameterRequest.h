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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetParameterRequest : public SSMRequest
  {
  public:
    GetParameterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline GetParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline GetParameterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter you want to query.</p>
     */
    inline GetParameterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }

    /**
     * <p>Return decrypted values for secure string parameters. This flag is ignored
     * for String and StringList parameter types.</p>
     */
    inline GetParameterRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
