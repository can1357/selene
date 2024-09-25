#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/small_rect_t.start.hpp"
namespace win
{
    // [struct _SMALL_RECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct small_rect_t     
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int16_t left;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Left
        _m01 int16_t top;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Top
        _m02 int16_t right;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Right
        _m03 int16_t bottom;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Bottom
                            
        SDK_MAGIC_PROPERTIES( "_SMALL_RECT.$", 0x8, true, 0x7cf33e8a348230eb );       
        SDK_FIXED_SIZE( small_rect_t, 0x8 );       
    };                      
};
#include "magic/small_rect_t.end.hpp"
SDK_VERIFY( struct win::small_rect_t, 0x8 );
