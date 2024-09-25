#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "device_power_state_t.hpp"

#include "magic/pm_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_capabilities_t                                                 
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                   
        _m00 struct ndis::object_header_t    header;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                        flags;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                        supported_wo_l_packet_patterns;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SupportedWoLPacketPatterns
        _m03 uint32_t                        num_total_wo_l_patterns;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumTotalWoLPatterns
        _m04 uint32_t                        max_wo_l_pattern_size;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxWoLPatternSize
        _m05 uint32_t                        max_wo_l_pattern_offset;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxWoLPatternOffset
        _m06 uint32_t                        max_wo_l_packet_save_buffer;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxWoLPacketSaveBuffer
        _m07 uint32_t                        supported_protocol_offloads;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SupportedProtocolOffloads
        _m08 uint32_t                        num_arp_offload_i_pv4_addresses;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumArpOffloadIPv4Addresses
        _m09 uint32_t                        num_ns_offload_i_pv6_addresses;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .NumNSOffloadIPv6Addresses
        _m10 enum ndis::device_power_state_t min_magic_packet_wake_up;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MinMagicPacketWakeUp
        _m11 enum ndis::device_power_state_t min_pattern_wake_up;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MinPatternWakeUp
        _m12 enum ndis::device_power_state_t min_link_change_wake_up;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MinLinkChangeWakeUp
        _m13 uint32_t                        supported_wake_up_events;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .SupportedWakeUpEvents
        _m14 uint32_t                        media_specific_wake_up_events;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MediaSpecificWakeUpEvents
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_CAPABILITIES.$", 0x3c, true, 0x34f633f58a5a1474 );                                
        SDK_FIXED_SIZE( pm_capabilities_t, 0x3c );                                
    };                                                                       
};
#include "magic/pm_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::pm_capabilities_t, 0x3c );
