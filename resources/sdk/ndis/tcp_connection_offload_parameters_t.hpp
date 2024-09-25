#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "offload_encapsulation_t.hpp"

#include "magic/tcp_connection_offload_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_connection_offload_parameters_t                                           
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                               
        _m00 struct ndis::object_header_t         header;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::offload_encapsulation_t encapsulation;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Encapsulation
        _m02 uint32_t                             ticks_per_second;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TicksPerSecond
        _m03 uint8_t                              tcp_ack_frequency;                       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TcpAckFrequency
        _m04 uint8_t                              tcp_delayed_ack_ticks;                   //{ +0x0025    +0x0025    +0x0025    +0x0025    } | .TcpDelayedAckTicks
        _m05 uint8_t                              tcp_maximum_retransmissions;             //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .TcpMaximumRetransmissions
        _m06 uint8_t                              tcp_doubt_reachability_retransmissions;  //{ +0x0027    +0x0027    +0x0027    +0x0027    } | .TcpDoubtReachabilityRetransmissions
        _m07 uint32_t                             tcp_sws_prevention_ticks;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TcpSwsPreventionTicks
        _m08 uint32_t                             tcp_duplicate_ack_threshold;             //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .TcpDuplicateAckThreshold
        _m09 uint32_t                             tcp_push_ticks;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TcpPushTicks
        _m10 uint32_t                             nce_stale_ticks;                         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NceStaleTicks
        _m11 uint32_t                             congestion_algorithm;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CongestionAlgorithm
                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.$", 0x3c, true, 0xf2abfb448f5d3e8d );                                       
        SDK_FIXED_SIZE( tcp_connection_offload_parameters_t, 0x3c );                                       
    };                                                                                   
};
#include "magic/tcp_connection_offload_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_connection_offload_parameters_t, 0x3c );
