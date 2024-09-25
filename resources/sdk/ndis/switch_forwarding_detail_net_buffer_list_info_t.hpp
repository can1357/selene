#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_forwarding_detail_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union switch_forwarding_detail_net_buffer_list_info_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint64_t as_uint64;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUINT64
        _m01 uint16_t num_available_destinations;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NumAvailableDestinations
        _m02 uint16_t source_port_id;                      //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .SourcePortId
        _m03 uint8_t  source_nic_index;                    //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .SourceNicIndex
        _m04 uint1_t  native_forwarding_required;          //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .NativeForwardingRequired
        _m05 uint1_t  is_packet_data_safe;                 //{ +0x0004@10 +0x0004@10 +0x0004@10 +0x0004@10 } | .IsPacketDataSafe
        _m06 uint12_t safe_packet_data_size;               //{ +0x0004@11 +0x0004@11 +0x0004@11 +0x0004@11 } | .SafePacketDataSize
                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m07 uint1_t  is_packet_data_uncached;             //{ +0x0004@23 +0x0004@23 +0x0004@23 } | .IsPacketDataUncached
        _m08 uint1_t  is_safe_packet_data_uncached;        //{ +0x0004@24 +0x0004@24 +0x0004@24 } | .IsSafePacketDataUncached
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.$", 0x8, true, 0x3d4ff083df1fcf0d );                             
        SDK_FIXED_SIZE( switch_forwarding_detail_net_buffer_list_info_t, 0x8 );                             
    };                                                   
};
#include "magic/switch_forwarding_detail_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( union ndis::switch_forwarding_detail_net_buffer_list_info_t, 0x8 );
