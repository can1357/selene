#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_tcp_ip_checksum_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TASK_TCP_IP_CHECKSUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_tcp_ip_checksum_t                          
    {                                                      
        struct u0_v4_transmit_t                            
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m00 uint1_t ip_options_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IpOptionsSupported
            _m01 uint1_t tcp_options_supported;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TcpOptionsSupported
            _m02 uint1_t tcp_checksum;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TcpChecksum
            _m03 uint1_t udp_checksum;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UdpChecksum
            _m04 uint1_t ip_checksum;                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IpChecksum
                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.$", 0x4, true, 0xf8fc3520b7c00921 );                                  
            SDK_FIXED_SIZE( u0_v4_transmit_t, 0x4 );                                  
        };                                                 
                                                           
        struct u4_v4_receive_t                             
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m06 uint1_t ip_options_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IpOptionsSupported
            _m07 uint1_t tcp_options_supported;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TcpOptionsSupported
            _m08 uint1_t tcp_checksum;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TcpChecksum
            _m09 uint1_t udp_checksum;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UdpChecksum
            _m10 uint1_t ip_checksum;                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IpChecksum
                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.$", 0x4, true, 0xc3a72ba999435e41 );                                  
            SDK_FIXED_SIZE( u4_v4_receive_t, 0x4 );                                  
        };                                                 
                                                           
        struct u8_v6_transmit_t                            
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m12 uint1_t ip_options_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IpOptionsSupported
            _m13 uint1_t tcp_options_supported;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TcpOptionsSupported
            _m14 uint1_t tcp_checksum;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TcpChecksum
            _m15 uint1_t udp_checksum;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UdpChecksum
                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit.$", 0x4, true, 0x331585568e125fb3 );                                  
            SDK_FIXED_SIZE( u8_v6_transmit_t, 0x4 );                                  
        };                                                 
                                                           
        struct u12_v6_receive_t                            
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m17 uint1_t ip_options_supported;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IpOptionsSupported
            _m18 uint1_t tcp_options_supported;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TcpOptionsSupported
            _m19 uint1_t tcp_checksum;                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TcpChecksum
            _m20 uint1_t udp_checksum;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UdpChecksum
                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive.$", 0x4, true, 0xdd43acdf84ff2665 );                                  
            SDK_FIXED_SIZE( u12_v6_receive_t, 0x4 );                                  
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m05 u0_v4_transmit_t                  v4_transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .V4Transmit
        _m11 u4_v4_receive_t                   v4_receive;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .V4Receive
        _m16 u8_v6_transmit_t                  v6_transmit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .V6Transmit
        _m21 u12_v6_receive_t                  v6_receive;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .V6Receive
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_IP_CHECKSUM.$", 0x10, true, 0x294fdd46a9758569 );            
        SDK_FIXED_SIZE( task_tcp_ip_checksum_t, 0x10 );            
    };                                                     
};
#include "magic/task_tcp_ip_checksum_t.end.hpp"
SDK_VERIFY( struct ndis::task_tcp_ip_checksum_t::u0_v4_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::task_tcp_ip_checksum_t::u4_v4_receive_t, 0x4 );
SDK_VERIFY( struct ndis::task_tcp_ip_checksum_t::u8_v6_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::task_tcp_ip_checksum_t::u12_v6_receive_t, 0x4 );
SDK_VERIFY( struct ndis::task_tcp_ip_checksum_t, 0x10 );
