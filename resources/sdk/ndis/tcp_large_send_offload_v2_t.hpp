#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_large_send_offload_v2_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_large_send_offload_v2_t                         
    {                                                          
        struct u0_i_pv4_t                                      
        {                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                 
            _m00 uint32_t encapsulation;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m01 uint32_t max_off_load_size;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
            _m02 uint32_t min_segment_count;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinSegmentCount
                                                               
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv4.$", 0xc, true, 0xf977bebd24665022 );                        
            SDK_FIXED_SIZE( u0_i_pv4_t, 0xc );                        
        };                                                     
                                                               
        struct u4_i_pv6_t                                      
        {                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                 
            _m04 uint32_t encapsulation;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m05 uint32_t max_off_load_size;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
            _m06 uint32_t min_segment_count;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinSegmentCount
            _m07 uint2_t  ip_extension_headers_supported;        //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .IpExtensionHeadersSupported
            _m08 uint2_t  tcp_options_supported;                 //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .TcpOptionsSupported
                                                               
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.$", 0x10, true, 0xb008b314b3d3ecb8 );                                     
            SDK_FIXED_SIZE( u4_i_pv6_t, 0x10 );                                     
        };                                                     
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                     
        _m03 u0_i_pv4_t                                  i_pv4;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IPv4
        _m09 u4_i_pv6_t                                  i_pv6;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IPv6
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.$", 0x1c, true, 0xb4ce8b281ca183c1 );      
        SDK_FIXED_SIZE( tcp_large_send_offload_v2_t, 0x1c );      
    };                                                         
};
#include "magic/tcp_large_send_offload_v2_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_large_send_offload_v2_t::u0_i_pv4_t, 0xc );
SDK_VERIFY( struct ndis::tcp_large_send_offload_v2_t::u4_i_pv6_t, 0x10 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_v2_t, 0x1c );
