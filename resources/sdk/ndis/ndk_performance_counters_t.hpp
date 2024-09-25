#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_performance_counters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NDK_PERFORMANCE_COUNTERS]
    // => Windows 10 v1607
    //
    struct ndk_performance_counters_t   
    {                                   
        // Windows 10 v1607                  
        //                              
        _m00 uint64_t connect;            //{ +0x0000    } | .Connect
        _m01 uint64_t accept;             //{ +0x0008    } | .Accept
        _m02 uint64_t connect_failure;    //{ +0x0010    } | .ConnectFailure
        _m03 uint64_t connection_error;   //{ +0x0018    } | .ConnectionError
        _m04 uint64_t active_connection;  //{ +0x0020    } | .ActiveConnection
        _m05 uint64_t cq_error;           //{ +0x00c8    } | .CQError
        _m06 uint64_t rdma_in_octets;     //{ +0x00d0    } | .RDMAInOctets
        _m07 uint64_t rdma_out_octets;    //{ +0x00d8    } | .RDMAOutOctets
        _m08 uint64_t rdma_in_frames;     //{ +0x00e0    } | .RDMAInFrames
        _m09 uint64_t rdma_out_frames;    //{ +0x00e8    } | .RDMAOutFrames
                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_NDK_PERFORMANCE_COUNTERS.$", 0x0, false, 0x95eb0e19635ad66a );                  
        SDK_FIXED_SIZE( ndk_performance_counters_t, 0xf0 );                  
    };                                  
};
#include "magic/ndk_performance_counters_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_performance_counters_t, 0xf0 );
