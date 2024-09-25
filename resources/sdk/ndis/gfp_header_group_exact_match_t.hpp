#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in_addr_t.hpp"
#include "object_header_t.hpp"
#include "../nt/in6_addr_t.hpp"
#include "gfp_ethernet_header_fields_t.hpp"

#include "magic/gfp_header_group_exact_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_header_group_exact_match_t                                                                  
    {                                                                                                      
        union u0_ip_address_t                                                                              
        {                                                                                                  
            struct u3_i_pv4_address_t                                                                      
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                         
                _m05 struct nt::in_addr_t source_ip_address;                                                 //{ +0x0000    +0x0000    +0x0000    } | .SourceIPAddress
                _m06 struct nt::in_addr_t destination_ip_address;                                            //{ +0x0004    +0x0004    +0x0004    } | .DestinationIPAddress
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv4Address.$", 0x8, true, 0x5c370bb9d4a0ce3b );                                                                
                SDK_FIXED_SIZE( u3_i_pv4_address_t, 0x8 );                                                                
            };                                                                                             
                                                                                                           
            struct u6_i_pv6_address_t                                                                      
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                         
                _m08 struct nt::in6_addr_t source_ip_address;                                                //{ +0x0000    +0x0000    +0x0000    } | .SourceIPAddress
                _m09 struct nt::in6_addr_t destination_ip_address;                                           //{ +0x0010    +0x0010    +0x0010    } | .DestinationIPAddress
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv6Address.$", 0x20, true, 0xe755a7f51624b890 );                                                                
                SDK_FIXED_SIZE( u6_i_pv6_address_t, 0x20 );                                                                
            };                                                                                             
                                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                                                             
            _m07 u3_i_pv4_address_t                               i_pv4_address;                             //{ +0x0000    +0x0000    +0x0000    } | .IPv4Address
            _m10 u6_i_pv6_address_t                               i_pv6_address;                             //{ +0x0000    +0x0000    +0x0000    } | .IPv6Address
                                                                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.$", 0x20, true, 0x11e16f23202bac35 );                                         
            SDK_FIXED_SIZE( u0_ip_address_t, 0x20 );                                                       
        };                                                                                                 
                                                                                                           
        union u9_transport_or_encapsulation_t                                                              
        {                                                                                                  
            struct u12_udp_t                                                                               
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
                //                                                                                         
                _m14 uint16_t source_port;                                                                   //{ +0x0000    +0x0000    +0x0000    } | .SourcePort
                _m15 uint16_t destination_port;                                                              //{ +0x0002    +0x0002    +0x0002    } | .DestinationPort
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Udp.$", 0x4, true, 0x675d4137c66d58de );                                                          
                SDK_FIXED_SIZE( u12_udp_t, 0x4 );                                                          
            };                                                                                             
                                                                                                           
            struct u15_tcp_t                                                                               
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
                //                                                                                         
                _m17 uint16_t source_port;                                                                   //{ +0x0000    +0x0000    +0x0000    } | .SourcePort
                _m18 uint16_t destination_port;                                                              //{ +0x0002    +0x0002    +0x0002    } | .DestinationPort
                _m19 uint8_t  tcp_flags;                                                                     //{ +0x0004    +0x0004    +0x0004    } | .TcpFlags
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Tcp.$", 0x6, true, 0x70fc37b030d0debc );                                                          
                SDK_FIXED_SIZE( u15_tcp_t, 0x6 );                                                          
            };                                                                                             
                                                                                                           
            struct u18_icmp_t                                                                              
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
                //                                                                                         
                _m21 uint8_t type;                                                                           //{ +0x0000    +0x0000    +0x0000    } | .Type
                _m22 uint8_t code;                                                                           //{ +0x0001    +0x0001    +0x0001    } | .Code
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Icmp.$", 0x2, true, 0x3e893e3309505f35 );                                              
                SDK_FIXED_SIZE( u18_icmp_t, 0x2 );                                                         
            };                                                                                             
                                                                                                           
            struct u21_encapsulation_t                                                                     
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                //                                                                                         
                _m24 uint32_t tenant_id;                                                                     //{ +0x0000    +0x0000    +0x0000    } | .TenantId
                _m25 uint16_t gre_protocol;                                                                  //{ +0x0004    +0x0004    +0x0004    } | .GreProtocol
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Encapsulation.$", 0x8, true, 0xbccb345ab96b4111 );                                                      
                SDK_FIXED_SIZE( u21_encapsulation_t, 0x8 );                                                      
            };                                                                                             
                                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                                                             
            _m16 u12_udp_t                     udp;                                                          //{ +0x0000    +0x0000    +0x0000    } | .Udp
            _m20 u15_tcp_t                     tcp;                                                          //{ +0x0000    +0x0000    +0x0000    } | .Tcp
            _m23 u18_icmp_t                    icmp;                                                         //{ +0x0000    +0x0000    +0x0000    } | .Icmp
            _m26 u21_encapsulation_t           encapsulation;                                                //{ +0x0000    +0x0000    +0x0000    } | .Encapsulation
                                                                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.$", 0x8, true, 0x64d92ba4b16fd8eb );                                         
            SDK_FIXED_SIZE( u9_transport_or_encapsulation_t, 0x8 );                                         
        };                                                                                                 
                                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                                                 
        _m00 struct ndis::object_header_t                                       header;                      //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                                           flags;                       //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                                           headers_present;             //{ +0x0008    +0x0008    +0x0008    } | .HeadersPresent
        _m03 uint64_t                                                           match_fields;                //{ +0x0010    +0x0010    +0x0010    } | .MatchFields
        _m04 struct ndis::gfp_ethernet_header_fields_t                          ethernet_fields;             //{ +0x0018    +0x0018    +0x0018    } | .EthernetFields
        _m11 u0_ip_address_t                                                    ip_address;                  //{ +0x002c    +0x002c    +0x002c    } | .IPAddress
        _m12 uint8_t                                                            dscp;                        //{ +0x004c    +0x004c    +0x004c    } | .Dscp
        _m13 uint8_t                                                            ip_protocol;                 //{ +0x004d    +0x004d    +0x004d    } | .IPProtocol
        _m27 u9_transport_or_encapsulation_t                                    transport_or_encapsulation;  //{ +0x0050    +0x0050    +0x0050    } | .TransportOrEncapsulation
                                                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.$", 0x58, true, 0x9f273b3099136c91 );                           
        SDK_FIXED_SIZE( gfp_header_group_exact_match_t, 0x58 );                                            
    };                                                                                                     
};
#include "magic/gfp_header_group_exact_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u0_ip_address_t::u3_i_pv4_address_t, 0x8 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u0_ip_address_t::u6_i_pv6_address_t, 0x20 );
SDK_VERIFY( union ndis::gfp_header_group_exact_match_t::u0_ip_address_t, 0x20 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u9_transport_or_encapsulation_t::u12_udp_t, 0x4 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u9_transport_or_encapsulation_t::u15_tcp_t, 0x6 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u9_transport_or_encapsulation_t::u18_icmp_t, 0x2 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t::u9_transport_or_encapsulation_t::u21_encapsulation_t, 0x8 );
SDK_VERIFY( union ndis::gfp_header_group_exact_match_t::u9_transport_or_encapsulation_t, 0x8 );
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_t, 0x58 );
