/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TransportProtocol.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ECS_API NetworkBinding
  {
  public:
    NetworkBinding();
    NetworkBinding(const Aws::Utils::Json::JsonValue& jsonValue);
    NetworkBinding& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The IP address that the container is bound to on the container instance.</p>
    */
    inline const Aws::String& GetBindIP() const{ return m_bindIP; }
    /*
     <p>The IP address that the container is bound to on the container instance.</p>
    */
    inline void SetBindIP(const Aws::String& value) { m_bindIPHasBeenSet = true; m_bindIP = value; }

    /*
     <p>The IP address that the container is bound to on the container instance.</p>
    */
    inline void SetBindIP(const char* value) { m_bindIPHasBeenSet = true; m_bindIP.assign(value); }

    /*
     <p>The IP address that the container is bound to on the container instance.</p>
    */
    inline NetworkBinding&  WithBindIP(const Aws::String& value) { SetBindIP(value); return *this;}

    /*
     <p>The IP address that the container is bound to on the container instance.</p>
    */
    inline NetworkBinding& WithBindIP(const char* value) { SetBindIP(value); return *this;}

    /*
     <p>The port number on the container that is be used with the network binding.</p>
    */
    inline long GetContainerPort() const{ return m_containerPort; }
    /*
     <p>The port number on the container that is be used with the network binding.</p>
    */
    inline void SetContainerPort(long value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /*
     <p>The port number on the container that is be used with the network binding.</p>
    */
    inline NetworkBinding&  WithContainerPort(long value) { SetContainerPort(value); return *this;}

    /*
     <p>The port number on the host that is used with the network binding.</p>
    */
    inline long GetHostPort() const{ return m_hostPort; }
    /*
     <p>The port number on the host that is used with the network binding.</p>
    */
    inline void SetHostPort(long value) { m_hostPortHasBeenSet = true; m_hostPort = value; }

    /*
     <p>The port number on the host that is used with the network binding.</p>
    */
    inline NetworkBinding&  WithHostPort(long value) { SetHostPort(value); return *this;}

    /*
     <p>The protocol used for the network binding.</p>
    */
    inline const TransportProtocol& GetProtocol() const{ return m_protocol; }
    /*
     <p>The protocol used for the network binding.</p>
    */
    inline void SetProtocol(const TransportProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /*
     <p>The protocol used for the network binding.</p>
    */
    inline NetworkBinding&  WithProtocol(const TransportProtocol& value) { SetProtocol(value); return *this;}

  private:
    Aws::String m_bindIP;
    bool m_bindIPHasBeenSet;
    long m_containerPort;
    bool m_containerPortHasBeenSet;
    long m_hostPort;
    bool m_hostPortHasBeenSet;
    TransportProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws