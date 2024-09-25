#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v2_tunnel_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_OFFLOAD_V2_TUNNEL_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_tunnel_net_buffer_list_info_t
    {                                                    
        struct u0_transmit_t                             
        {                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                
            _m00 void* tunnel_handle;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TunnelHandle
                                                         
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2_TUNNEL_NET_BUFFER_LIST_INFO.Transmit.$", 0x8, true, 0x662c714806c8981c );                       
            SDK_FIXED_SIZE( u0_transmit_t, 0x8 );                       
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m01 u0_transmit_t           transmit;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2_TUNNEL_NET_BUFFER_LIST_INFO.$", 0x8, true, 0x1447a5c37dcf7b6f );         
        SDK_FIXED_SIZE( ipsec_offload_v2_tunnel_net_buffer_list_info_t, 0x8 );         
    };                                                   
};
#include "magic/ipsec_offload_v2_tunnel_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_tunnel_net_buffer_list_info_t::u0_transmit_t, 0x8 );
SDK_VERIFY( struct ndis::ipsec_offload_v2_tunnel_net_buffer_list_info_t, 0x8 );
