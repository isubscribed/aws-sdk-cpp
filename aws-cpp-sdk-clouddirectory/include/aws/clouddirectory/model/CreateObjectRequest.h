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
#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API CreateObjectRequest : public CloudDirectoryRequest
  {
  public:
    CreateObjectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> in which the object will be created.
     * For more information, see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::Vector<SchemaFacet>& GetSchemaFacets() const{ return m_schemaFacets; }

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetSchemaFacets(const Aws::Vector<SchemaFacet>& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = value; }

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetSchemaFacets(Aws::Vector<SchemaFacet>&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets = value; }

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& WithSchemaFacets(const Aws::Vector<SchemaFacet>& value) { SetSchemaFacets(value); return *this;}

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& WithSchemaFacets(Aws::Vector<SchemaFacet>&& value) { SetSchemaFacets(value); return *this;}

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& AddSchemaFacets(const SchemaFacet& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(value); return *this; }

    /**
     * <p>List of facet ARNs to be associated with the object. For more information,
     * see <a>arns</a>.</p>
     */
    inline CreateObjectRequest& AddSchemaFacets(SchemaFacet&& value) { m_schemaFacetsHasBeenSet = true; m_schemaFacets.push_back(value); return *this; }

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetObjectAttributeList() const{ return m_objectAttributeList; }

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline void SetObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline void SetObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList = value; }

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline CreateObjectRequest& WithObjectAttributeList(const Aws::Vector<AttributeKeyAndValue>& value) { SetObjectAttributeList(value); return *this;}

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline CreateObjectRequest& WithObjectAttributeList(Aws::Vector<AttributeKeyAndValue>&& value) { SetObjectAttributeList(value); return *this;}

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline CreateObjectRequest& AddObjectAttributeList(const AttributeKeyAndValue& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }

    /**
     * <p>Attribute map whose attribute ARN contains the key and attribute value as the
     * map value.</p>
     */
    inline CreateObjectRequest& AddObjectAttributeList(AttributeKeyAndValue&& value) { m_objectAttributeListHasBeenSet = true; m_objectAttributeList.push_back(value); return *this; }

    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline const ObjectReference& GetParentReference() const{ return m_parentReference; }

    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline void SetParentReference(const ObjectReference& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline void SetParentReference(ObjectReference&& value) { m_parentReferenceHasBeenSet = true; m_parentReference = value; }

    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline CreateObjectRequest& WithParentReference(const ObjectReference& value) { SetParentReference(value); return *this;}

    /**
     * <p>If specified, the parent reference to which this object will be attached.</p>
     */
    inline CreateObjectRequest& WithParentReference(ObjectReference&& value) { SetParentReference(value); return *this;}

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline CreateObjectRequest& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline CreateObjectRequest& WithLinkName(Aws::String&& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of link that is used to attach this object to a parent.</p>
     */
    inline CreateObjectRequest& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    Aws::Vector<SchemaFacet> m_schemaFacets;
    bool m_schemaFacetsHasBeenSet;
    Aws::Vector<AttributeKeyAndValue> m_objectAttributeList;
    bool m_objectAttributeListHasBeenSet;
    ObjectReference m_parentReference;
    bool m_parentReferenceHasBeenSet;
    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws