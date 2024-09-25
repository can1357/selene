#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/size_t.start.hpp"
namespace tag
{
    // [struct tagSIZE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct size_t       
    {                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //              
        _m00 int32_t cx;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cx
        _m01 int32_t cy;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .cy
                        
        SDK_NONVOL_PROPERTIES( "tagSIZE.$", 0x8, true, 0xeec72e00cbe866d5 );   
        SDK_FIXED_SIZE( size_t, 0x8 );   
    };                  
};
#include "magic/size_t.end.hpp"
SDK_VERIFY( struct tag::size_t, 0x8 );
