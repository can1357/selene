#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_that_part1_t.start.hpp"
namespace win
{
    // [struct WireThatPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_that_part1_t 
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t flags;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .flags
        _m01 uint32_t unique;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .unique
                             
        SDK_MAGIC_PROPERTIES( "WireThatPart1.$", 0x8, true, 0x2850701e7c247e6e );       
        SDK_FIXED_SIZE( wire_that_part1_t, 0x8 );       
    };                       
};
#include "magic/wire_that_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_that_part1_t, 0x8 );
