#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_large_send_offload_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_large_send_offload_net_buffer_list_info_t              
    {                                                                 
        struct u0_transmit_t                                          
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                        
            _m00 uint1_t type;                                          //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Type
                                                                      
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.Transmit.$", 0x4, true, 0x809c90a861fbbf09 );                              
            SDK_FIXED_SIZE( u0_transmit_t, 0x4 );                              
        };                                                            
                                                                      
        struct u4_lso_v1_transmit_t                                   
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                        
            _m02 uint20_t mss;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MSS
            _m03 uint10_t tcp_header_offset;                            //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .TcpHeaderOffset
            _m04 uint1_t  type;                                         //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Type
                                                                      
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1Transmit.$", 0x4, true, 0x2fa28028a10cbf2e );                                           
            SDK_FIXED_SIZE( u4_lso_v1_transmit_t, 0x4 );                                           
        };                                                            
                                                                      
        struct u8_lso_v1_transmit_complete_t                          
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                        
            _m06 uint30_t tcp_payload;                                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TcpPayload
            _m07 uint1_t  type;                                         //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Type
                                                                      
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1TransmitComplete.$", 0x4, true, 0x577dca1def394c5 );                                     
            SDK_FIXED_SIZE( u8_lso_v1_transmit_complete_t, 0x4 );                                     
        };                                                            
                                                                      
        struct u12_lso_v2_transmit_t                                  
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                        
            _m09 uint20_t mss;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MSS
            _m10 uint10_t tcp_header_offset;                            //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .TcpHeaderOffset
            _m11 uint1_t  type;                                         //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Type
            _m12 uint1_t  ip_version;                                   //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .IPVersion
                                                                      
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit.$", 0x4, true, 0x867808fc57156ef4 );                                           
            SDK_FIXED_SIZE( u12_lso_v2_transmit_t, 0x4 );                                           
        };                                                            
                                                                      
        struct u16_lso_v2_transmit_complete_t                         
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                        
            _m14 uint1_t type;                                          //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .Type
                                                                      
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2TransmitComplete.$", 0x4, true, 0xa30318b635c2af69 );                              
            SDK_FIXED_SIZE( u16_lso_v2_transmit_complete_t, 0x4 );                              
        };                                                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                            
        _m01 u0_transmit_t                   transmit;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m05 u4_lso_v1_transmit_t            lso_v1_transmit;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LsoV1Transmit
        _m08 u8_lso_v1_transmit_complete_t   lso_v1_transmit_complete;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LsoV1TransmitComplete
        _m13 u12_lso_v2_transmit_t           lso_v2_transmit;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LsoV2Transmit
        _m15 u16_lso_v2_transmit_complete_t  lso_v2_transmit_complete;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LsoV2TransmitComplete
        _m16 void*                           value;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.$", 0x8, true, 0x12bd322f4d0c447d );                         
        SDK_FIXED_SIZE( tcp_large_send_offload_net_buffer_list_info_t, 0x8 );                         
    };                                                                
};
#include "magic/tcp_large_send_offload_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t::u0_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t::u4_lso_v1_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t::u8_lso_v1_transmit_complete_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t::u12_lso_v2_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t::u16_lso_v2_transmit_complete_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_large_send_offload_net_buffer_list_info_t, 0x8 );
