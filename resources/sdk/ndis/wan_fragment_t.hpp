#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_fragment_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_FRAGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_fragment_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 sdk::array<uint8_t, 6> remote_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RemoteAddress
        _m01 sdk::array<uint8_t, 6> local_address;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LocalAddress
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_FRAGMENT.$", 0xc, true, 0x21ae5fdc41cbe552 );               
        SDK_FIXED_SIZE( wan_fragment_t, 0xc );               
    };                                             
};
#include "magic/wan_fragment_t.end.hpp"
SDK_VERIFY( struct ndis::wan_fragment_t, 0xc );
