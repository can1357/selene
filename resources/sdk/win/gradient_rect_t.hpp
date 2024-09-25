#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gradient_rect_t.start.hpp"
namespace win
{
    // [struct _GRADIENT_RECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gradient_rect_t        
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t upper_left;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UpperLeft
        _m01 uint32_t lower_right;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LowerRight
                                  
        SDK_NONVOL_PROPERTIES( "_GRADIENT_RECT.$", 0x8, true, 0xbbde92a123f4e73 );            
        SDK_FIXED_SIZE( gradient_rect_t, 0x8 );            
    };                            
};
#include "magic/gradient_rect_t.end.hpp"
SDK_VERIFY( struct win::gradient_rect_t, 0x8 );
