#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_adapter_offload_attributes_t.start.hpp"
namespace ndis
{
    struct offload_t;
    struct tcp_connection_offload_t;

    // [struct _NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_offload_attributes_t                                                 
    {                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                       
        _m00 struct ndis::object_header_t           header;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::offload_t*                default_offload_configuration;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DefaultOffloadConfiguration
        _m02 struct ndis::offload_t*                hardware_offload_capabilities;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HardwareOffloadCapabilities
        _m03 struct ndis::tcp_connection_offload_t* default_tcp_connection_offload_configuration;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DefaultTcpConnectionOffloadConfiguration
        _m04 struct ndis::tcp_connection_offload_t* tcp_connection_offload_hardware_capabilities;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TcpConnectionOffloadHardwareCapabilities
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.$", 0x28, true, 0xba4b97d5f91b9dd5 );                                             
        SDK_FIXED_SIZE( miniport_adapter_offload_attributes_t, 0x28 );                                             
    };                                                                                           
};
#include "magic/miniport_adapter_offload_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_offload_attributes_t, 0x28 );
