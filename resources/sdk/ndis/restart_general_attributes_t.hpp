#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "net_if_access_type_t.hpp"
#include "net_if_connection_type_t.hpp"

#include "magic/restart_general_attributes_t.start.hpp"
namespace ndis
{
    struct receive_scale_capabilities_t;

    // [struct _NDIS_RESTART_GENERAL_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct restart_general_attributes_t                                             
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                          
        _m00 struct ndis::object_header_t               header;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                   mtu_size;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MtuSize
        _m02 uint64_t                                   max_xmit_link_speed;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxXmitLinkSpeed
        _m03 uint64_t                                   max_rcv_link_speed;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxRcvLinkSpeed
        _m04 uint32_t                                   lookahead_size;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LookaheadSize
        _m05 uint32_t                                   mac_options;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MacOptions
        _m06 uint32_t                                   supported_packet_filters;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SupportedPacketFilters
        _m07 uint32_t                                   max_multicast_list_size;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxMulticastListSize
        _m08 struct ndis::receive_scale_capabilities_t* recv_scale_capabilities;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RecvScaleCapabilities
        _m09 enum ndis::net_if_access_type_t            access_type;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AccessType
        _m10 uint32_t                                   flags;                        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
        _m11 enum ndis::net_if_connection_type_t        connection_type;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ConnectionType
        _m12 uint32_t                                   supported_statistics;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SupportedStatistics
        _m13 uint32_t                                   data_back_fill_size;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DataBackFillSize
        _m14 uint32_t                                   context_back_fill_size;       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ContextBackFillSize
        _m15 uint32_t*                                  supported_oid_list;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SupportedOidList
        _m16 uint32_t                                   supported_oid_list_length;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SupportedOidListLength
        _m17 uint32_t                                   max_lookahead_size_accessed;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .MaxLookaheadSizeAccessed
                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_RESTART_GENERAL_ATTRIBUTES.$", 0x58, true, 0x9cdaecbf9175bd3a );                            
        SDK_FIXED_SIZE( restart_general_attributes_t, 0x58 );                            
    };                                                                              
};
#include "magic/restart_general_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::restart_general_attributes_t, 0x58 );
