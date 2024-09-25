#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_stats_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_stats_t                      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t if_hc_in_octets;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ifHCInOctets
        _m01 uint64_t if_hc_in_ucast_octets;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ifHCInUcastOctets
        _m02 uint64_t if_hc_in_broadcast_octets;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ifHCInBroadcastOctets
        _m03 uint64_t if_hc_in_multicast_octets;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ifHCInMulticastOctets
        _m04 uint64_t if_hc_in_ucast_pkts;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ifHCInUcastPkts
        _m05 uint64_t if_hc_in_multicast_pkts;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ifHCInMulticastPkts
        _m06 uint64_t if_hc_in_broadcast_pkts;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ifHCInBroadcastPkts
        _m07 uint64_t if_hc_out_octets;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ifHCOutOctets
        _m08 uint64_t if_hc_out_ucast_pkts;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ifHCOutUcastPkts
        _m09 uint64_t if_hc_out_multicast_pkts;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ifHCOutMulticastPkts
        _m10 uint64_t if_hc_out_broadcast_pkts;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ifHCOutBroadcastPkts
        _m11 uint64_t if_hc_out_ucast_octets;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ifHCOutUcastOctets
        _m12 uint64_t if_hc_out_multicast_octets;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ifHCOutMulticastOctets
        _m13 uint64_t if_hc_out_broadcast_octets;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ifHCOutBroadcastOctets
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_STATS.$", 0x70, true, 0x8c643d00fe89e460 );                           
        SDK_FIXED_SIZE( miniport_stats_t, 0x70 );                           
    };                                           
};
#include "magic/miniport_stats_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_stats_t, 0x70 );
