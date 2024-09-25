#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in_addr_t.hpp"

#include "magic/sockaddr_in_t.start.hpp"
namespace ndis
{
    // [struct sockaddr_in]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sockaddr_in_t                     
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 uint16_t             sin_family;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .sin_family
        _m01 uint16_t             sin_port;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .sin_port
        _m02 struct nt::in_addr_t sin_addr;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .sin_addr
        _m03 sdk::array<char, 8>  sin_zero;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .sin_zero
                                             
        SDK_NONVOL_PROPERTIES( "sockaddr_in.$", 0x10, true, 0x169cf5aa667f0bd3 );           
        SDK_FIXED_SIZE( sockaddr_in_t, 0x10 );           
    };                                       
};
#include "magic/sockaddr_in_t.end.hpp"
SDK_VERIFY( struct ndis::sockaddr_in_t, 0x10 );
