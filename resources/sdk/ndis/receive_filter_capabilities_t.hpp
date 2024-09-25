#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/receive_filter_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_FILTER_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_capabilities_t                                               
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                             
        _m00 struct ndis::object_header_t header;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     enabled_filter_types;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnabledFilterTypes
        _m03 uint32_t                     enabled_queue_types;                           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EnabledQueueTypes
        _m04 uint32_t                     num_queues;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumQueues
        _m05 uint32_t                     supported_queue_properties;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SupportedQueueProperties
        _m06 uint32_t                     supported_filter_tests;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SupportedFilterTests
        _m07 uint32_t                     supported_headers;                             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SupportedHeaders
        _m08 uint32_t                     supported_mac_header_fields;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SupportedMacHeaderFields
        _m09 uint32_t                     max_mac_header_filters;                        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxMacHeaderFilters
        _m10 uint32_t                     max_queue_groups;                              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxQueueGroups
        _m11 uint32_t                     max_queues_per_queue_group;                    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MaxQueuesPerQueueGroup
        _m12 uint32_t                     min_lookahead_split_size;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MinLookaheadSplitSize
        _m13 uint32_t                     max_lookahead_split_size;                      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MaxLookaheadSplitSize
        _m14 uint32_t                     supported_arp_header_fields;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SupportedARPHeaderFields
        _m15 uint32_t                     supported_i_pv4_header_fields;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SupportedIPv4HeaderFields
        _m16 uint32_t                     supported_i_pv6_header_fields;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SupportedIPv6HeaderFields
        _m17 uint32_t                     supported_udp_header_fields;                   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .SupportedUdpHeaderFields
        _m18 uint32_t                     max_field_tests_per_packet_coalescing_filter;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MaxFieldTestsPerPacketCoalescingFilter
        _m19 uint32_t                     max_packet_coalescing_filters;                 //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .MaxPacketCoalescingFilters
        _m20 uint32_t                     ndis_reserved;                                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdisReserved
                                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_CAPABILITIES.$", 0x54, true, 0x11ac65edc5535be0 );                                             
        SDK_FIXED_SIZE( receive_filter_capabilities_t, 0x54 );                                             
    };                                                                                 
};
#include "magic/receive_filter_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_capabilities_t, 0x54 );
