#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcp_ip_checksum_packet_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_ip_checksum_packet_info_t                             
    {                                                                
        struct u0_transmit_t                                         
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                       
            _m00 uint1_t ndis_packet_checksum_v4;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NdisPacketChecksumV4
            _m01 uint1_t ndis_packet_checksum_v6;                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NdisPacketChecksumV6
            _m02 uint1_t ndis_packet_tcp_checksum;                     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NdisPacketTcpChecksum
            _m03 uint1_t ndis_packet_udp_checksum;                     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NdisPacketUdpChecksum
            _m04 uint1_t ndis_packet_ip_checksum;                      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .NdisPacketIpChecksum
                                                                     
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.$", 0x4, true, 0x7ff0eed0f495a68f );                                  
            SDK_FIXED_SIZE( u0_transmit_t, 0x4 );                                  
        };                                                           
                                                                     
        struct u4_receive_t                                          
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                       
            _m06 uint1_t ndis_packet_tcp_checksum_failed;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NdisPacketTcpChecksumFailed
            _m07 uint1_t ndis_packet_udp_checksum_failed;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NdisPacketUdpChecksumFailed
            _m08 uint1_t ndis_packet_ip_checksum_failed;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NdisPacketIpChecksumFailed
            _m09 uint1_t ndis_packet_tcp_checksum_succeeded;           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NdisPacketTcpChecksumSucceeded
            _m10 uint1_t ndis_packet_udp_checksum_succeeded;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .NdisPacketUdpChecksumSucceeded
            _m11 uint1_t ndis_packet_ip_checksum_succeeded;            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .NdisPacketIpChecksumSucceeded
            _m12 uint1_t ndis_packet_loopback;                         //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .NdisPacketLoopback
                                                                     
            SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.$", 0x4, true, 0x164638a6209d63aa );                                            
            SDK_FIXED_SIZE( u4_receive_t, 0x4 );                                            
        };                                                           
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                           
        _m05 u0_transmit_t                                  transmit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m13 u4_receive_t                                   receive;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Receive
        _m14 uint32_t                                       value;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.$", 0x4, true, 0x13554587bc33378e );         
        SDK_FIXED_SIZE( tcp_ip_checksum_packet_info_t, 0x4 );         
    };                                                               
};
#include "magic/tcp_ip_checksum_packet_info_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_ip_checksum_packet_info_t::u0_transmit_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_packet_info_t::u4_receive_t, 0x4 );
SDK_VERIFY( struct ndis::tcp_ip_checksum_packet_info_t, 0x4 );
