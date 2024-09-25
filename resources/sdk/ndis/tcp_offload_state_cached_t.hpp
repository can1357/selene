#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/tcp_offload_state_cached_t.start.hpp"
namespace ndis
{
    // [struct _TCP_OFFLOAD_STATE_CACHED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_state_cached_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct ndis::offload_state_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                            flags;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t                            initial_rcv_wnd;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .InitialRcvWnd
        _m03 uint32_t                            rcv_indication_size;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RcvIndicationSize
        _m04 uint8_t                             ka_probe_count;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .KaProbeCount
        _m05 uint32_t                            ka_timeout;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KaTimeout
        _m06 uint32_t                            ka_interval;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .KaInterval
        _m07 uint32_t                            max_rt;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxRT
        _m08 uint20_t                            flow_label;            //{ +0x0024@0  +0x0024@0  +0x0024@0  +0x0024@0  } | .FlowLabel
        _m09 uint8_t                             ttl_or_hop_limit;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TtlOrHopLimit
        _m10 uint8_t                             tos_or_traffic_class;  //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .TosOrTrafficClass
        _m11 uint3_t                             user_priority;         //{ +0x002a@0  +0x002a@0  +0x002a@0  +0x002a@0  } | .UserPriority
                                                                      
        SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATE_CACHED.$", 0x2c, true, 0x4530f28def7b1330 );                     
        SDK_FIXED_SIZE( tcp_offload_state_cached_t, 0x2c );                     
    };                                                                
};
#include "magic/tcp_offload_state_cached_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_state_cached_t, 0x2c );
