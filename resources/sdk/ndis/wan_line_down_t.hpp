#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_line_down_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_LINE_DOWN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_line_down_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 sdk::array<uint8_t, 6> remote_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RemoteAddress
        _m01 sdk::array<uint8_t, 6> local_address;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LocalAddress
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_LINE_DOWN.$", 0xc, true, 0xe2a77afecd531378 );               
        SDK_FIXED_SIZE( wan_line_down_t, 0xc );               
    };                                             
};
#include "magic/wan_line_down_t.end.hpp"
SDK_VERIFY( struct ndis::wan_line_down_t, 0xc );
