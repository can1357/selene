#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in_addr_t.hpp"
#include "object_header_t.hpp"
#include "../nt/in6_addr_t.hpp"
#include "gfp_ethernet_header_fields_t.hpp"
#include "gft_header_group_transposition_action_t.hpp"

#include "magic/gft_header_group_transposition_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_header_group_transposition_t                                                                
    {                                                                                                      
        union u0_ip_address_t                                                                              
        {                                                                                                  
            struct u3_i_pv4_address_t                                                                      
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                         
                _m06 struct nt::in_addr_t source_ip_address;                                                 //{ +0x0000    +0x0000    +0x0000    } | .SourceIPAddress
                _m07 struct nt::in_addr_t destination_ip_address;                                            //{ +0x0004    +0x0004    +0x0004    } | .DestinationIPAddress
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv4Address.$", 0x8, true, 0x4dbb18574b8b8ac8 );                                                                
                SDK_FIXED_SIZE( u3_i_pv4_address_t, 0x8 );                                                                
            };                                                                                             
                                                                                                           
            struct u6_i_pv6_address_t                                                                      
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                         
                _m09 struct nt::in6_addr_t source_ip_address;                                                //{ +0x0000    +0x0000    +0x0000    } | .SourceIPAddress
                _m10 struct nt::in6_addr_t destination_ip_address;                                           //{ +0x0010    +0x0010    +0x0010    } | .DestinationIPAddress
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv6Address.$", 0x20, true, 0xbddc00420bcfe5d0 );                                                                
                SDK_FIXED_SIZE( u6_i_pv6_address_t, 0x20 );                                                                
            };                                                                                             
                                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                                                             
            _m08 u3_i_pv4_address_t                               i_pv4_address;                             //{ +0x0000    +0x0000    +0x0000    } | .IPv4Address
            _m11 u6_i_pv6_address_t                               i_pv6_address;                             //{ +0x0000    +0x0000    +0x0000    } | .IPv6Address
                                                                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.$", 0x20, true, 0x8f29b7f035f8bdbe );                                         
            SDK_FIXED_SIZE( u0_ip_address_t, 0x20 );                                                       
        };                                                                                                 
                                                                                                           
        union u9_transport_or_encapsulation_t                                                              
        {                                                                                                  
            struct u12_udp_t                                                                               
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
                //                                                                                         
                _m16 uint16_t source_port;                                                                   //{ +0x0000    +0x0000    +0x0000    } | .SourcePort
                _m17 uint16_t destination_port;                                                              //{ +0x0002    +0x0002    +0x0002    } | .DestinationPort
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Udp.$", 0x4, true, 0xc5c16c7df2a2009a );                                                          
                SDK_FIXED_SIZE( u12_udp_t, 0x4 );                                                          
            };                                                                                             
                                                                                                           
            struct u15_tcp_t                                                                               
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
                //                                                                                         
                _m19 uint16_t source_port;                                                                   //{ +0x0000    +0x0000    +0x0000    } | .SourcePort
                _m20 uint16_t destination_port;                                                              //{ +0x0002    +0x0002    +0x0002    } | .DestinationPort
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Tcp.$", 0x4, true, 0xef509c7e8b5c34d2 );                                                          
                SDK_FIXED_SIZE( u15_tcp_t, 0x4 );                                                          
            };                                                                                             
                                                                                                           
            struct u18_encapsulation_t                                                                     
            {                                                                                              
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                //                                                                                         
                _m22 uint32_t tenant_id;                                                                     //{ +0x0000    +0x0000    +0x0000    } | .TenantId
                _m23 uint16_t gre_protocol;                                                                  //{ +0x0004    +0x0004    +0x0004    } | .GreProtocol
                _m24 uint16_t entropy;                                                                       //{ +0x0006    +0x0006    +0x0006    } | .Entropy
                                                                                                           
                SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Encapsulation.$", 0x8, true, 0x2b2eb402324efe28 );                                                      
                SDK_FIXED_SIZE( u18_encapsulation_t, 0x8 );                                                      
            };                                                                                             
                                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                                                             
            _m18 u12_udp_t                     udp;                                                          //{ +0x0000    +0x0000    +0x0000    } | .Udp
            _m21 u15_tcp_t                     tcp;                                                          //{ +0x0000    +0x0000    +0x0000    } | .Tcp
            _m25 u18_encapsulation_t           encapsulation;                                                //{ +0x0000    +0x0000    +0x0000    } | .Encapsulation
                                                                                                           
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.$", 0x8, true, 0xd07a23374528044 );                                         
            SDK_FIXED_SIZE( u9_transport_or_encapsulation_t, 0x8 );                                         
        };                                                                                                 
                                                                                                           
        using action_t = enum ndis::gft_header_group_transposition_action_t;                               
                                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                                                 
        _m00 struct ndis::object_header_t                                       header;                      //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                                           flags;                       //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 action_t                                                           action;                      //{ +0x0008    +0x0008    +0x0008    } | .Action
        _m03 uint32_t                                                           headers_present;             //{ +0x000c    +0x000c    +0x000c    } | .HeadersPresent
        _m04 uint64_t                                                           header_fields;               //{ +0x0010    +0x0010    +0x0010    } | .HeaderFields
        _m05 struct ndis::gfp_ethernet_header_fields_t                          ethernet_fields;             //{ +0x0018    +0x0018    +0x0018    } | .EthernetFields
        _m12 u0_ip_address_t                                                    ip_address;                  //{ +0x002c    +0x002c    +0x002c    } | .IPAddress
        _m13 uint8_t                                                            ttl;                         //{ +0x004c    +0x004c    +0x004c    } | .Ttl
        _m14 uint8_t                                                            dscp;                        //{ +0x004d    +0x004d    +0x004d    } | .Dscp
        _m15 uint8_t                                                            ip_protocol;                 //{ +0x004e    +0x004e    +0x004e    } | .IPProtocol
        _m26 u9_transport_or_encapsulation_t                                    transport_or_encapsulation;  //{ +0x0050    +0x0050    +0x0050    } | .TransportOrEncapsulation
                                                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.$", 0x58, true, 0xa4aef640531f278c );                           
        SDK_FIXED_SIZE( gft_header_group_transposition_t, 0x58 );                                          
    };                                                                                                     
};
#include "magic/gft_header_group_transposition_t.end.hpp"
SDK_VERIFY( struct ndis::gft_header_group_transposition_t::u0_ip_address_t::u3_i_pv4_address_t, 0x8 );
SDK_VERIFY( struct ndis::gft_header_group_transposition_t::u0_ip_address_t::u6_i_pv6_address_t, 0x20 );
SDK_VERIFY( union ndis::gft_header_group_transposition_t::u0_ip_address_t, 0x20 );
SDK_VERIFY( struct ndis::gft_header_group_transposition_t::u9_transport_or_encapsulation_t::u12_udp_t, 0x4 );
SDK_VERIFY( struct ndis::gft_header_group_transposition_t::u9_transport_or_encapsulation_t::u15_tcp_t, 0x4 );
SDK_VERIFY( struct ndis::gft_header_group_transposition_t::u9_transport_or_encapsulation_t::u18_encapsulation_t, 0x8 );
SDK_VERIFY( union ndis::gft_header_group_transposition_t::u9_transport_or_encapsulation_t, 0x8 );
SDK_VERIFY( struct ndis::gft_header_group_transposition_t, 0x58 );
