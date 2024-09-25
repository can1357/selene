#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_large_send_offload_v1_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_large_send_offload_v1_t            
    {                                             
        struct u0_i_pv4_t                         
        {                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                    
            _m00 uint32_t encapsulation;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m01 uint32_t max_off_load_size;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
            _m02 uint32_t min_segment_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinSegmentCount
            _m03 uint2_t  tcp_options;              //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .TcpOptions
            _m04 uint2_t  ip_options;               //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .IpOptions
                                                  
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.$", 0x10, true, 0xe89d0ba80964ffe6 );                        
            SDK_FIXED_SIZE( u0_i_pv4_t, 0x10 );                        
        };                                        
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                        
        _m05 u0_i_pv4_t                     i_pv4;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IPv4
                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.$", 0x10, true, 0x666354b6c32f4dc3 );      
        SDK_FIXED_SIZE( tcp_large_send_offload_v1_t, 0x10 );      
    };                                            
};
#include "magic/tcp_large_send_offload_v1_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_large_send_offload_v1_t::u0_i_pv4_t, 0x10 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_v1_t, 0x10 );
