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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    BadRequest,
    Conflict,
    Forbidden,
    NotFound,
    PreconditionFailed,
    ResourceLimitExceeded,
    ServiceFailure,
    AccessDenied,
    ServiceUnavailable,
    Throttled,
    Unauthorized,
    Unprocessable,
    VoiceConnectorGroupAssociationsExist,
    PhoneNumberAssociationsExist
  };

namespace ErrorCodeMapper
{
AWS_CHIME_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
