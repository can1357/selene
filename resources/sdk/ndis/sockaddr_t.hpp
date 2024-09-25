#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sockaddr_t.start.hpp"
namespace ndis
{
    // [struct sockaddr]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sockaddr_t                       
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 uint16_t             sa_family;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .sa_family
        _m01 sdk::array<char, 14> sa_data;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .sa_data
                                            
        SDK_NONVOL_PROPERTIES( "sockaddr.$", 0x10, true, 0xc5091cb3d3a697f2 );          
        SDK_FIXED_SIZE( sockaddr_t, 0x10 );          
    };                                      
};
#include "magic/sockaddr_t.end.hpp"
SDK_VERIFY( struct ndis::sockaddr_t, 0x10 );
