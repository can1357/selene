#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v2_header_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_header_net_buffer_list_info_t
    {                                                    
        struct u0_transmit_t                             
        {                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                      
            _m00 uint8_t next_header;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NextHeader
            _m01 uint8_t pad_length;                       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PadLength
            _m02 uint8_t ah_header_offset;                 //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .AhHeaderOffset
            _m03 uint8_t esp_header_offset;                //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .EspHeaderOffset
                                                         
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit.$", 0x4, true, 0x6b677f80cf6a4a16 );                           
            SDK_FIXED_SIZE( u0_transmit_t, 0x4 );                           
        };                                               
                                                         
        struct u4_receive_t                              
        {                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                      
            _m05 uint8_t next_header;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NextHeader
            _m06 uint8_t pad_length;                       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PadLength
            _m07 uint1_t header_info_set;                  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .HeaderInfoSet
                                                         
            SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Receive.$", 0x4, true, 0x2abb48acdeea81f );                         
            SDK_FIXED_SIZE( u4_receive_t, 0x4 );                         
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m04 u0_transmit_t                 transmit;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m08 u4_receive_t                  receive;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Receive
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.$", 0x4, true, 0x4df906d2ca0d7d9d );         
        SDK_FIXED_SIZE( ipsec_offload_v2_header_net_buffer_list_info_t, 0x4 );         
    };                                                   
};
#include "magic/ipsec_offload_v2_header_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_header_net_buffer_list_info_t::u0_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::ipsec_offload_v2_header_net_buffer_list_info_t::u4_receive_t, 0x4 );
SDK_VERIFY( struct ndis::ipsec_offload_v2_header_net_buffer_list_info_t, 0x4 );
