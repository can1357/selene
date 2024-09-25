#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_gft_offload_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_GFT_OFFLOAD_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_gft_offload_info_t
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t flags;                   //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint16_t v_port_id;               //{ +0x0004    +0x0004    +0x0004    } | .VPortId
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_GFT_OFFLOAD_INFO.$", 0x8, true, 0x96a0292f17dba82b );          
        SDK_FIXED_SIZE( net_buffer_list_gft_offload_info_t, 0x8 );          
    };                                       
};
#include "magic/net_buffer_list_gft_offload_info_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_gft_offload_info_t, 0x8 );
