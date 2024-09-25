#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/fixed_t.hpp"

#include "magic/pointfx_t.start.hpp"
namespace tag
{
    // [struct tagPOINTFX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pointfx_t               
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                         
        _m00 struct win::fixed_t x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 struct win::fixed_t y;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
                                   
        SDK_NONVOL_PROPERTIES( "tagPOINTFX.$", 0x8, true, 0xde5b747a68d0e764 );  
        SDK_FIXED_SIZE( pointfx_t, 0x8 );  
    };                             
};
#include "magic/pointfx_t.end.hpp"
SDK_VERIFY( struct tag::pointfx_t, 0x8 );
