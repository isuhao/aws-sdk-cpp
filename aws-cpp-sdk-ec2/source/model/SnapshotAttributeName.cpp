﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SnapshotAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace SnapshotAttributeNameMapper
      {

        static const int productCodes_HASH = HashingUtils::HashString("productCodes");
        static const int createVolumePermission_HASH = HashingUtils::HashString("createVolumePermission");


        SnapshotAttributeName GetSnapshotAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == productCodes_HASH)
          {
            return SnapshotAttributeName::productCodes;
          }
          else if (hashCode == createVolumePermission_HASH)
          {
            return SnapshotAttributeName::createVolumePermission;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotAttributeName>(hashCode);
          }

          return SnapshotAttributeName::NOT_SET;
        }

        Aws::String GetNameForSnapshotAttributeName(SnapshotAttributeName enumValue)
        {
          switch(enumValue)
          {
          case SnapshotAttributeName::productCodes:
            return "productCodes";
          case SnapshotAttributeName::createVolumePermission:
            return "createVolumePermission";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SnapshotAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
