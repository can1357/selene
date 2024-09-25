#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ip_offload_stats_t.start.hpp"
namespace ndis
{
    // [struct _IP_OFFLOAD_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ip_offload_stats_t              
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t in_receives;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InReceives
        _m01 uint64_t in_octets;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InOctets
        _m02 uint64_t in_delivers;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InDelivers
        _m03 uint64_t out_requests;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OutRequests
        _m04 uint64_t out_octets;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutOctets
        _m05 uint32_t in_header_errors;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InHeaderErrors
        _m06 uint32_t in_truncated_packets;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .InTruncatedPackets
        _m07 uint32_t in_discards;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InDiscards
        _m08 uint32_t out_discards;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .OutDiscards
        _m09 uint32_t out_no_routes;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OutNoRoutes
                                           
        SDK_MAGIC_PROPERTIES( "_IP_OFFLOAD_STATS.$", 0x40, true, 0xac8d770ce82af234 );                     
        SDK_FIXED_SIZE( ip_offload_stats_t, 0x40 );                     
    };                                     
};
#include "magic/ip_offload_stats_t.end.hpp"
SDK_VERIFY( struct ndis::ip_offload_stats_t, 0x40 );
