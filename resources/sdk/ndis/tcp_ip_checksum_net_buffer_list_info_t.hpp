#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_ip_checksum_net_buffer_list_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_ip_checksum_net_buffer_list_info_t            
    {                                                        
        struct u0_transmit_t                                 
        {                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                               
            _m00 uint1_t  is_i_pv4;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsIPv4
            _m01 uint1_t  is_i_pv6;                            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsIPv6
            _m02 uint1_t  tcp_checksum;                        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TcpChecksum
            _m03 uint1_t  udp_checksum;                        //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UdpChecksum
            _m04 uint1_t  ip_header_checksum;                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IpHeaderChecksum
            _m05 uint10_t tcp_header_offset;                   //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .TcpHeaderOffset
                                                             
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.$", 0x4, true, 0x75d493d25401414b );                            
            SDK_FIXED_SIZE( u0_transmit_t, 0x4 );                            
        };                                                   
                                                             
        struct u4_receive_t                                  
        {                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                               
            _m07 uint1_t tcp_checksum_failed;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TcpChecksumFailed
            _m08 uint1_t udp_checksum_failed;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .UdpChecksumFailed
            _m09 uint1_t ip_checksum_failed;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IpChecksumFailed
            _m10 uint1_t tcp_checksum_succeeded;               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .TcpChecksumSucceeded
            _m11 uint1_t udp_checksum_succeeded;               //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .UdpChecksumSucceeded
            _m12 uint1_t ip_checksum_succeeded;                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IpChecksumSucceeded
            _m13 uint1_t loopback;                             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Loopback
            _m14 uint1_t tcp_checksum_value_invalid;           //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .TcpChecksumValueInvalid
            _m15 uint1_t ip_checksum_value_invalid;            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IpChecksumValueInvalid
                                                             
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.$", 0x4, true, 0xfd2d4403f8e75020 );                                    
            SDK_FIXED_SIZE( u4_receive_t, 0x4 );                                    
        };                                                   
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                   
        _m06 u0_transmit_t                          transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m16 u4_receive_t                           receive;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Receive
        _m17 void*                                  value;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.$", 0x8, true, 0x991d1f498261096c );         
        SDK_FIXED_SIZE( tcp_ip_checksum_net_buffer_list_info_t, 0x8 );         
    };                                                       
};
#include "magic/tcp_ip_checksum_net_buffer_list_info_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_ip_checksum_net_buffer_list_info_t::u0_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_net_buffer_list_info_t::u4_receive_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_net_buffer_list_info_t, 0x8 );
