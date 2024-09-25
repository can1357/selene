#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_offload_stats_t.start.hpp"
namespace ndis
{
    // [struct _TCP_OFFLOAD_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_stats_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t in_segments;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InSegments
        _m01 uint64_t out_segments;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OutSegments
        _m02 uint32_t currently_established;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentlyEstablished
        _m03 uint32_t reset_established;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ResetEstablished
        _m04 uint32_t retransmitted_segments;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RetransmittedSegments
        _m05 uint32_t in_errors;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .InErrors
        _m06 uint32_t out_resets;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutResets
                                             
        SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATS.$", 0x28, true, 0x807263882911307f );                       
        SDK_FIXED_SIZE( tcp_offload_stats_t, 0x28 );                       
    };                                       
};
#include "magic/tcp_offload_stats_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_stats_t, 0x28 );
