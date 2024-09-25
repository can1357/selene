#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/packet_8021q_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_8021Q_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_8021q_info_t                           
    {                                                    
        struct u0_tag_header_t                           
        {                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                           
            _m00 uint3_t  user_priority;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UserPriority
            _m01 uint1_t  canonical_format_id;             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CanonicalFormatId
            _m02 uint12_t vlan_id;                         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VlanId
                                                         
            SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_8021Q_INFO.TagHeader.$", 0x4, true, 0x9572859aad7c2197 );                               
            SDK_FIXED_SIZE( u0_tag_header_t, 0x4 );                               
        };                                               
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m03 u0_tag_header_t                  tag_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagHeader
        _m04 void*                            value;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_8021Q_INFO.$", 0x8, true, 0x535cfb179b8953bf );           
        SDK_FIXED_SIZE( packet_8021q_info_t, 0x8 );           
    };                                                   
};
#include "magic/packet_8021q_info_t.end.hpp"
SDK_VERIFY( struct ndis::packet_8021q_info_t::u0_tag_header_t, 0x4 );
SDK_VERIFY( struct ndis::packet_8021q_info_t, 0x8 );
