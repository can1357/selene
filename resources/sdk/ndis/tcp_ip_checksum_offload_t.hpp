#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_ip_checksum_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_ip_checksum_offload_t                                    
    {                                                                   
        struct u0_i_pv4_transmit_t                                      
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                          
            _m00 uint32_t encapsulation;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m01 uint2_t  ip_options_supported;                           //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IpOptionsSupported
            _m02 uint2_t  tcp_options_supported;                          //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .TcpOptionsSupported
            _m03 uint2_t  tcp_checksum;                                   //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .TcpChecksum
            _m04 uint2_t  udp_checksum;                                   //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .UdpChecksum
            _m05 uint2_t  ip_checksum;                                    //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .IpChecksum
                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.$", 0x8, true, 0xd97ec95a92b1ef5d );                                     
            SDK_FIXED_SIZE( u0_i_pv4_transmit_t, 0x8 );                                     
        };                                                              
                                                                        
        struct u4_i_pv4_receive_t                                       
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                          
            _m07 uint32_t encapsulation;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m08 uint2_t  ip_options_supported;                           //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IpOptionsSupported
            _m09 uint2_t  tcp_options_supported;                          //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .TcpOptionsSupported
            _m10 uint2_t  tcp_checksum;                                   //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .TcpChecksum
            _m11 uint2_t  udp_checksum;                                   //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .UdpChecksum
            _m12 uint2_t  ip_checksum;                                    //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .IpChecksum
                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.$", 0x8, true, 0xffc2cd055f1b1c4e );                                     
            SDK_FIXED_SIZE( u4_i_pv4_receive_t, 0x8 );                                     
        };                                                              
                                                                        
        struct u8_i_pv6_transmit_t                                      
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                          
            _m14 uint32_t encapsulation;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m15 uint2_t  ip_extension_headers_supported;                 //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IpExtensionHeadersSupported
            _m16 uint2_t  tcp_options_supported;                          //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .TcpOptionsSupported
            _m17 uint2_t  tcp_checksum;                                   //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .TcpChecksum
            _m18 uint2_t  udp_checksum;                                   //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .UdpChecksum
                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.$", 0x8, true, 0x3297a349e1b00e6e );                                              
            SDK_FIXED_SIZE( u8_i_pv6_transmit_t, 0x8 );                                              
        };                                                              
                                                                        
        struct u12_i_pv6_receive_t                                      
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                          
            _m20 uint32_t encapsulation;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
            _m21 uint2_t  ip_extension_headers_supported;                 //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IpExtensionHeadersSupported
            _m22 uint2_t  tcp_options_supported;                          //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .TcpOptionsSupported
            _m23 uint2_t  tcp_checksum;                                   //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .TcpChecksum
            _m24 uint2_t  udp_checksum;                                   //{ +0x0004@6  +0x0004@6  +0x0004@6  +0x0004@6  } | .UdpChecksum
                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.$", 0x8, true, 0x6208f3a616c49ccd );                                              
            SDK_FIXED_SIZE( u12_i_pv6_receive_t, 0x8 );                                              
        };                                                              
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                              
        _m06 u0_i_pv4_transmit_t                         i_pv4_transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IPv4Transmit
        _m13 u4_i_pv4_receive_t                          i_pv4_receive;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IPv4Receive
        _m19 u8_i_pv6_transmit_t                         i_pv6_transmit;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IPv6Transmit
        _m25 u12_i_pv6_receive_t                         i_pv6_receive;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IPv6Receive
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.$", 0x20, true, 0xdd269bc83b3799ca );               
        SDK_FIXED_SIZE( tcp_ip_checksum_offload_t, 0x20 );               
    };                                                                  
};
#include "magic/tcp_ip_checksum_offload_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_ip_checksum_offload_t::u0_i_pv4_transmit_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_offload_t::u4_i_pv4_receive_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_offload_t::u8_i_pv6_transmit_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_offload_t::u12_i_pv6_receive_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_offload_t, 0x20 );
