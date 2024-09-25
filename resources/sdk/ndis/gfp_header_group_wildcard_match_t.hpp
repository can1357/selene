#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_ethernet_header_fields_t.hpp"
#include "gfp_ip_src_and_dest_address_wildcard_match_t.hpp"
#include "gfp_transport_src_and_dest_port_wildcard_match_t.hpp"

#include "magic/gfp_header_group_wildcard_match_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_header_group_wildcard_match_t                                                                 
    {                                                                                                        
        union u0_transport_or_encapsulation_t                                                                
        {                                                                                                    
            struct u3_udp_header_t                                                                           
            {                                                                                                
                using udp_src_and_dest_port_t = struct ndis::gfp_transport_src_and_dest_port_wildcard_match_t;                                                               
                                                                                                             
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
                //                                                                                           
                _m09 udp_src_and_dest_port_t  udp_src_and_dest_port;                                           //{ +0x0000    +0x0000    +0x0000    } | .UdpSrcAndDestPort
                                                                                                             
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.UdpHeader.$", 0x10, true, 0xe48868ff411701e2 );                                                               
                SDK_FIXED_SIZE( u3_udp_header_t, 0x10 );                                                               
            };                                                                                               
                                                                                                             
            struct u6_tcp_header_t                                                                           
            {                                                                                                
                using tcp_src_and_dest_port_t = struct ndis::gfp_transport_src_and_dest_port_wildcard_match_t;                                                               
                                                                                                             
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
                //                                                                                           
                _m11 tcp_src_and_dest_port_t  tcp_src_and_dest_port;                                           //{ +0x0000    +0x0000    +0x0000    } | .TcpSrcAndDestPort
                _m12 uint8_t                  tcp_flags;                                                       //{ +0x0010    +0x0010    +0x0010    } | .TcpFlags
                                                                                                             
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.TcpHeader.$", 0x14, true, 0x1c10dd40ccb5425d );                                                               
                SDK_FIXED_SIZE( u6_tcp_header_t, 0x14 );                                                               
            };                                                                                               
                                                                                                             
            struct u9_icmp_header_t                                                                          
            {                                                                                                
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
                //                                                                                           
                _m14 uint8_t type;                                                                             //{ +0x0000    +0x0000    +0x0000    } | .Type
                _m15 uint8_t code;                                                                             //{ +0x0001    +0x0001    +0x0001    } | .Code
                                                                                                             
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.IcmpHeader.$", 0x2, true, 0x83cc91a1929e60 );                                              
                SDK_FIXED_SIZE( u9_icmp_header_t, 0x2 );                                                     
            };                                                                                               
                                                                                                             
            struct u12_encapsulation_t                                                                       
            {                                                                                                
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                //                                                                                           
                _m17 uint32_t tenant_id;                                                                       //{ +0x0000    +0x0000    +0x0000    } | .TenantId
                _m18 uint16_t gre_protocol;                                                                    //{ +0x0004    +0x0004    +0x0004    } | .GreProtocol
                                                                                                             
                SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.Encapsulation.$", 0x8, true, 0x5c6592adc64bbf64 );                                                      
                SDK_FIXED_SIZE( u12_encapsulation_t, 0x8 );                                                      
            };                                                                                               
                                                                                                             
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                               
            _m10 u3_udp_header_t                                    udp_header;                                //{ +0x0000    +0x0000    +0x0000    } | .UdpHeader
            _m13 u6_tcp_header_t                                    tcp_header;                                //{ +0x0000    +0x0000    +0x0000    } | .TcpHeader
            _m16 u9_icmp_header_t                                   icmp_header;                               //{ +0x0000    +0x0000    +0x0000    } | .IcmpHeader
            _m19 u12_encapsulation_t                                encapsulation;                             //{ +0x0000    +0x0000    +0x0000    } | .Encapsulation
                                                                                                             
            SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.$", 0x14, true, 0x5e7e248ddfb2746d );                                         
            SDK_FIXED_SIZE( u0_transport_or_encapsulation_t, 0x14 );                                         
        };                                                                                                   
                                                                                                             
        using ip_src_and_dest_address_t = union ndis::gfp_ip_src_and_dest_address_wildcard_match_t;                           
                                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                   
        _m00 struct ndis::object_header_t                                         header;                      //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                                             flags;                       //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                                             profile_id;                  //{ +0x0008    +0x0008    +0x0008    } | .ProfileId
        _m03 uint32_t                                                             headers_present;             //{ +0x000c    +0x000c    +0x000c    } | .HeadersPresent
        _m04 uint64_t                                                             match_fields;                //{ +0x0010    +0x0010    +0x0010    } | .MatchFields
        _m05 struct ndis::gfp_ethernet_header_fields_t                            ethernet_fields;             //{ +0x0018    +0x0018    +0x0018    } | .EthernetFields
        _m06 ip_src_and_dest_address_t                                            ip_src_and_dest_address;     //{ +0x002c    +0x002c    +0x002c    } | .IPSrcAndDestAddress
        _m07 uint8_t                                                              dscp;                        //{ +0x005c    +0x005c    +0x005c    } | .Dscp
        _m08 uint8_t                                                              ip_protocol;                 //{ +0x005d    +0x005d    +0x005d    } | .IPProtocol
        _m20 u0_transport_or_encapsulation_t                                      transport_or_encapsulation;  //{ +0x0060    +0x0060    +0x0060    } | .TransportOrEncapsulation
                                                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.$", 0x78, true, 0xecf6de3fb175ed6 );                           
        SDK_FIXED_SIZE( gfp_header_group_wildcard_match_t, 0x78 );                                           
    };                                                                                                       
};
#include "magic/gfp_header_group_wildcard_match_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_t::u0_transport_or_encapsulation_t::u3_udp_header_t, 0x10 );
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_t::u0_transport_or_encapsulation_t::u6_tcp_header_t, 0x14 );
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_t::u0_transport_or_encapsulation_t::u9_icmp_header_t, 0x2 );
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_t::u0_transport_or_encapsulation_t::u12_encapsulation_t, 0x8 );
SDK_VERIFY( union ndis::gfp_header_group_wildcard_match_t::u0_transport_or_encapsulation_t, 0x14 );
SDK_VERIFY( struct ndis::gfp_header_group_wildcard_match_t, 0x78 );
