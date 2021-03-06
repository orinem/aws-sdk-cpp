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

#include <aws/apigateway/model/GetApiKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetApiKeysRequest::GetApiKeysRequest() : 
    m_positionHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nameQueryHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_includeValues(false),
    m_includeValuesHasBeenSet(false)
{
}

Aws::String GetApiKeysRequest::SerializePayload() const
{
  return {};
}

void GetApiKeysRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_positionHasBeenSet)
    {
      ss << m_position;
      uri.AddQueryStringParameter("position", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_nameQueryHasBeenSet)
    {
      ss << m_nameQuery;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_customerIdHasBeenSet)
    {
      ss << m_customerId;
      uri.AddQueryStringParameter("customerId", ss.str());
      ss.str("");
    }

    if(m_includeValuesHasBeenSet)
    {
      ss << m_includeValues;
      uri.AddQueryStringParameter("includeValues", ss.str());
      ss.str("");
    }

}



