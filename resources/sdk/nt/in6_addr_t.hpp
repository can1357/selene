#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/in6_addr_t.start.hpp"
namespace nt
{
    // [struct in6_addr]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct in6_addr_t                     
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint8_t, 16> byte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte
        _m01 sdk::array<uint16_t, 8> word;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Word
                                          
        SDK_NONVOL_PROPERTIES( "in6_addr.$", 0x10, true, 0xf4985d75dfc19d79 );     
        SDK_FIXED_SIZE( in6_addr_t, 0x10 );     
    };                                    
};
#include "magic/in6_addr_t.end.hpp"
SDK_VERIFY( struct nt::in6_addr_t, 0x10 );
