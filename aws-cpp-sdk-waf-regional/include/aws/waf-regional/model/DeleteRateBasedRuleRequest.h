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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API DeleteRateBasedRuleRequest : public WAFRegionalRequest
  {
  public:
    DeleteRateBasedRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to delete.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRateBasedRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
