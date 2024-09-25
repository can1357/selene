#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/statistics_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_STATISTICS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statistics_info_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                           
        _m00 struct ndis::object_header_t header;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     supported_statistics;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SupportedStatistics
        _m02 uint64_t                     if_in_discards;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ifInDiscards
        _m03 uint64_t                     if_in_errors;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ifInErrors
        _m04 uint64_t                     if_hc_in_octets;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ifHCInOctets
        _m05 uint64_t                     if_hc_in_ucast_pkts;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ifHCInUcastPkts
        _m06 uint64_t                     if_hc_in_multicast_pkts;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ifHCInMulticastPkts
        _m07 uint64_t                     if_hc_in_broadcast_pkts;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ifHCInBroadcastPkts
        _m08 uint64_t                     if_hc_out_octets;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ifHCOutOctets
        _m09 uint64_t                     if_hc_out_ucast_pkts;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ifHCOutUcastPkts
        _m10 uint64_t                     if_hc_out_multicast_pkts;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ifHCOutMulticastPkts
        _m11 uint64_t                     if_hc_out_broadcast_pkts;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ifHCOutBroadcastPkts
        _m12 uint64_t                     if_out_errors;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ifOutErrors
        _m13 uint64_t                     if_out_discards;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ifOutDiscards
        _m14 uint64_t                     if_hc_in_ucast_octets;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ifHCInUcastOctets
        _m15 uint64_t                     if_hc_in_multicast_octets;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ifHCInMulticastOctets
        _m16 uint64_t                     if_hc_in_broadcast_octets;   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ifHCInBroadcastOctets
        _m17 uint64_t                     if_hc_out_ucast_octets;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ifHCOutUcastOctets
        _m18 uint64_t                     if_hc_out_multicast_octets;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ifHCOutMulticastOctets
        _m19 uint64_t                     if_hc_out_broadcast_octets;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ifHCOutBroadcastOctets
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_STATISTICS_INFO.$", 0x98, true, 0x304910f935dc6436 );                           
        SDK_FIXED_SIZE( statistics_info_t, 0x98 );                           
    };                                                               
};
#include "magic/statistics_info_t.end.hpp"
SDK_VERIFY( struct ndis::statistics_info_t, 0x98 );
