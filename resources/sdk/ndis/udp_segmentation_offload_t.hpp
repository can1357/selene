#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/udp_segmentation_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_UDP_SEGMENTATION_OFFLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct udp_segmentation_offload_t                           
    {                                                           
        struct u0_i_pv4_t                                       
        {                                                       
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                                  
            _m00 uint32_t encapsulation;                          //{ +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m01 uint32_t max_off_load_size;                      //{ +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
            _m02 uint6_t  min_segment_count;                      //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .MinSegmentCount
            _m03 uint1_t  sub_mss_final_segment_supported;        //{ +0x0008@6  +0x0008@6  +0x0008@6  } | .SubMssFinalSegmentSupported
                                                                
            SDK_MAGIC_PROPERTIES( "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv4.$", 0xc, true, 0x4b436d760543b6b );                                      
            SDK_FIXED_SIZE( u0_i_pv4_t, 0xc );                                      
        };                                                      
                                                                
        struct u3_i_pv6_t                                       
        {                                                       
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                                  
            _m05 uint32_t encapsulation;                          //{ +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m06 uint32_t max_off_load_size;                      //{ +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
            _m07 uint6_t  min_segment_count;                      //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .MinSegmentCount
            _m08 uint1_t  sub_mss_final_segment_supported;        //{ +0x0008@6  +0x0008@6  +0x0008@6  } | .SubMssFinalSegmentSupported
            _m09 uint2_t  ip_extension_headers_supported;         //{ +0x000c@0  +0x000c@0  +0x000c@0  } | .IpExtensionHeadersSupported
                                                                
            SDK_MAGIC_PROPERTIES( "_NDIS_UDP_SEGMENTATION_OFFLOAD.IPv6.$", 0x10, true, 0xaa7ccdee8f66c386 );                                      
            SDK_FIXED_SIZE( u3_i_pv6_t, 0x10 );                                      
        };                                                      
                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                      
        _m04 u0_i_pv4_t                                   i_pv4;  //{ +0x0000    +0x0000    +0x0000    } | .IPv4
        _m10 u3_i_pv6_t                                   i_pv6;  //{ +0x000c    +0x000c    +0x000c    } | .IPv6
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_UDP_SEGMENTATION_OFFLOAD.$", 0x1c, true, 0x97f3e38fa0bccb87 );      
        SDK_FIXED_SIZE( udp_segmentation_offload_t, 0x1c );      
    };                                                          
};
#include "magic/udp_segmentation_offload_t.end.hpp"
SDK_VERIFY( struct ndis::udp_segmentation_offload_t::u0_i_pv4_t, 0xc );
SDK_VERIFY( struct ndis::udp_segmentation_offload_t::u3_i_pv6_t, 0x10 );
SDK_VERIFY( struct ndis::udp_segmentation_offload_t, 0x1c );
