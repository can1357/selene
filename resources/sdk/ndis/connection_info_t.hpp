#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/connection_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_CONNECTION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct connection_info_t                                                     
    {                                                                            
        struct u0_i_pv4_info_t                                                   
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                   
            _m01 uint32_t source_i_pv4_address;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceIPv4Address
            _m02 uint32_t destination_i_pv4_address;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DestinationIPv4Address
            _m03 uint8_t  protocol;                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Protocol
                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_CONNECTION_INFO.IPv4Info.$", 0xc, true, 0x2bcf82b1ea07c507 );                                        
            SDK_FIXED_SIZE( u0_i_pv4_info_t, 0xc );                                        
        };                                                                       
                                                                                 
        struct u4_i_pv6_info_t                                                   
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                   
            _m05 sdk::array<uint8_t, 16> source_i_pv6_address;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceIPv6Address
            _m06 sdk::array<uint8_t, 16> destination_i_pv6_address;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DestinationIPv6Address
            _m07 uint8_t                 protocol;                                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Protocol
                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_CONNECTION_INFO.IPv6Info.$", 0x21, true, 0x16fa8adf046bd7da );                                        
            SDK_FIXED_SIZE( u4_i_pv6_info_t, 0x21 );                                        
        };                                                                       
                                                                                 
        struct u8_tcp_port_info_t                                                
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                   
            _m09 uint16_t source_tcp_port;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceTcpPort
            _m10 uint16_t destination_tcp_port;                                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DestinationTcpPort
                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_CONNECTION_INFO.TcpPortInfo.$", 0x4, true, 0xadbcbb4e6b0a0bf9 );                                   
            SDK_FIXED_SIZE( u8_tcp_port_info_t, 0x4 );                                   
        };                                                                       
                                                                                 
        struct u12_udp_port_info_t                                               
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                   
            _m12 uint16_t source_udp_port;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceUdpPort
            _m13 uint16_t destination_udp_port;                                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DestinationUdpPort
                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_CONNECTION_INFO.UdpPortInfo.$", 0x4, true, 0xdccfaaad3e4465dd );                                   
            SDK_FIXED_SIZE( u12_udp_port_info_t, 0x4 );                                   
        };                                                                       
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                       
        _m00 sdk::array<uint8_t, 6>                                mac_address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MacAddress
        _m04 u0_i_pv4_info_t                                       i_pv4_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IPv4Info
        _m08 u4_i_pv6_info_t                                       i_pv6_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IPv6Info
        _m11 u8_tcp_port_info_t                                    tcp_port_info;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .TcpPortInfo
        _m14 u12_udp_port_info_t                                   udp_port_info;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UdpPortInfo
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_CONNECTION_INFO.$", 0x30, true, 0x85c6a3fb996be3e6 );              
        SDK_FIXED_SIZE( connection_info_t, 0x30 );                               
    };                                                                           
};
#include "magic/connection_info_t.end.hpp"
SDK_VERIFY( struct ndis::connection_info_t::u0_i_pv4_info_t, 0xc );
SDK_VERIFY( struct ndis::connection_info_t::u4_i_pv6_info_t, 0x21 );
SDK_VERIFY( struct ndis::connection_info_t::u8_tcp_port_info_t, 0x4 );
SDK_VERIFY( struct ndis::connection_info_t::u12_udp_port_info_t, 0x4 );
SDK_VERIFY( struct ndis::connection_info_t, 0x30 );
