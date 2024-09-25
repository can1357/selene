#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rect_t.start.hpp"
namespace tag
{
    // [struct tagRECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rect_t           
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int32_t left;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .left
        _m01 int32_t top;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .top
        _m02 int32_t right;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .right
        _m03 int32_t bottom;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .bottom
                            
        SDK_NONVOL_PROPERTIES( "tagRECT.$", 0x10, true, 0xecc257e5b2ad012e );       
        SDK_FIXED_SIZE( rect_t, 0x10 );       
    };                      
};
#include "magic/rect_t.end.hpp"
SDK_VERIFY( struct tag::rect_t, 0x10 );
