#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_cs_traffic_stats_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_CS_TRAFFIC_STATS]
    // => Windows 10 v1607
    //
    struct miniport_cs_traffic_stats_t         
    {                                          
        // Windows 10 v1607                         
        //                                     
        _m00 uint64_t if_in_unicast_packets;     //{ +0x0000    } | .IfInUnicastPackets
        _m01 uint64_t if_out_unicast_packets;    //{ +0x0008    } | .IfOutUnicastPackets
        _m02 uint64_t if_in_multicast_packets;   //{ +0x0010    } | .IfInMulticastPackets
        _m03 uint64_t if_out_multicast_packets;  //{ +0x0018    } | .IfOutMulticastPackets
        _m04 uint64_t if_in_broadcast_packets;   //{ +0x0020    } | .IfInBroadcastPackets
        _m05 uint64_t if_out_broadcast_packets;  //{ +0x0028    } | .IfOutBroadcastPackets
                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_CS_TRAFFIC_STATS.$", 0x0, false, 0x6ae05e4bdaf0f812 );                         
        SDK_FIXED_SIZE( miniport_cs_traffic_stats_t, 0x30 );                         
    };                                         
};
#include "magic/miniport_cs_traffic_stats_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_cs_traffic_stats_t, 0x30 );
