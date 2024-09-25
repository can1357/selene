#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_virtual_subnet_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_virtual_subnet_info_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint24_t virtual_subnet_id;          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .VirtualSubnetId
        _m01 uint8_t  reserved_vsid_bits;         //{ +0x0000@24 +0x0000@24 +0x0000@24 } | .ReservedVsidBits
        _m02 void*    value;                      //{ +0x0000    +0x0000    +0x0000    } | .Value
                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO.$", 0x8, true, 0x592e309b23d1c25 );                   
        SDK_FIXED_SIZE( net_buffer_list_virtual_subnet_info_t, 0x8 );                   
    };                                          
};
#include "magic/net_buffer_list_virtual_subnet_info_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_virtual_subnet_info_t, 0x8 );
