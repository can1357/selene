#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_recv_seg_coalesce_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_recv_seg_coalesce_offload_t
    {                                     
        struct u0_i_pv4_t                 
        {                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
            //                         
            _m00 uint8_t enabled;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
                                          
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv4.$", 0x1, true, 0xe927ed5f698acadf );              
            SDK_FIXED_SIZE( u0_i_pv4_t, 0x1 );              
        };                                
                                          
        struct u4_i_pv6_t                 
        {                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
            //                         
            _m02 uint8_t enabled;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
                                          
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.IPv6.$", 0x1, true, 0x8aa5f733a2bd3641 );              
            SDK_FIXED_SIZE( u4_i_pv6_t, 0x1 );              
        };                                
                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                             
        _m01 u0_i_pv4_t          i_pv4;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IPv4
        _m03 u4_i_pv6_t          i_pv6;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .IPv6
                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD.$", 0x2, true, 0x35893cb9c67d6edb );      
        SDK_FIXED_SIZE( tcp_recv_seg_coalesce_offload_t, 0x2 );      
    };                                    
};
#include "magic/tcp_recv_seg_coalesce_offload_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_recv_seg_coalesce_offload_t::u0_i_pv4_t, 0x1 );
SDK_VERIFY( struct ndis::tcp_recv_seg_coalesce_offload_t::u4_i_pv6_t, 0x1 );
SDK_VERIFY( struct ndis::tcp_recv_seg_coalesce_offload_t, 0x2 );
