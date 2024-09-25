#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/tcp_connection_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_CONNECTION_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_connection_offload_t                                       
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                
        _m00 struct ndis::object_header_t header;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     encapsulation;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Encapsulation
        _m02 uint2_t                      support_i_pv4;                    //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .SupportIPv4
        _m03 uint2_t                      support_i_pv6;                    //{ +0x0008@2  +0x0008@2  +0x0008@2  +0x0008@2  } | .SupportIPv6
        _m04 uint2_t                      support_i_pv6_extension_headers;  //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .SupportIPv6ExtensionHeaders
        _m05 uint2_t                      support_sack;                     //{ +0x0008@6  +0x0008@6  +0x0008@6  +0x0008@6  } | .SupportSack
        _m06 uint4_t                      congestion_algorithm;             //{ +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  } | .CongestionAlgorithm
        _m07 uint32_t                     tcp_connection_offload_capacity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TcpConnectionOffloadCapacity
        _m08 uint32_t                     flags;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_CONNECTION_OFFLOAD.$", 0x14, true, 0x607125a1690cfae6 );                                
        SDK_FIXED_SIZE( tcp_connection_offload_t, 0x14 );                                
    };                                                                    
};
#include "magic/tcp_connection_offload_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_connection_offload_t, 0x14 );
