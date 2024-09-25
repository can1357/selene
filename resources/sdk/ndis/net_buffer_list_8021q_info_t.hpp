#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_8021q_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_8021Q_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_8021q_info_t                        
    {                                                          
        struct u0_tag_header_t                                 
        {                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                 
            _m00 uint3_t  user_priority;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UserPriority
            _m01 uint1_t  canonical_format_id;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CanonicalFormatId
            _m02 uint12_t vlan_id;                               //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VlanId
                                                               
            SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_8021Q_INFO.TagHeader.$", 0x4, true, 0xff6c1b71a0350c84 );                                     
            SDK_FIXED_SIZE( u0_tag_header_t, 0x4 );                                     
        };                                                     
                                                               
        struct u4_w_lan_tag_header_t                           
        {                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                 
            _m04 uint3_t  user_priority;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UserPriority
            _m05 uint1_t  canonical_format_id;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CanonicalFormatId
            _m06 uint12_t vlan_id;                               //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VlanId
            _m07 uint4_t  wmm_info;                              //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .WMMInfo
                                                               
            SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_8021Q_INFO.WLanTagHeader.$", 0x4, true, 0x68194aa80f8c294f );                                     
            SDK_FIXED_SIZE( u4_w_lan_tag_header_t, 0x4 );                                     
        };                                                     
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m03 u0_tag_header_t                  tag_header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagHeader
        _m08 u4_w_lan_tag_header_t            w_lan_tag_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WLanTagHeader
        _m09 void*                            value;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_8021Q_INFO.$", 0x8, true, 0xf659b1ddf6d0ad40 );                 
        SDK_FIXED_SIZE( net_buffer_list_8021q_info_t, 0x8 );                 
    };                                                         
};
#include "magic/net_buffer_list_8021q_info_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_8021q_info_t::u0_tag_header_t, 0x4 );
SDK_VERIFY( struct ndis::net_buffer_list_8021q_info_t::u4_w_lan_tag_header_t, 0x4 );
SDK_VERIFY( struct ndis::net_buffer_list_8021q_info_t, 0x8 );
