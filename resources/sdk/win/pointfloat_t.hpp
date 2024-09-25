#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointfloat_t.start.hpp"
namespace win
{
    // [struct _POINTFLOAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pointfloat_t
    {                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //           
        _m00 float x;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 float y;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
                       
        SDK_NONVOL_PROPERTIES( "_POINTFLOAT.$", 0x8, true, 0x77a24c9ae7887a16 );  
        SDK_FIXED_SIZE( pointfloat_t, 0x8 );  
    };                 
};
#include "magic/pointfloat_t.end.hpp"
SDK_VERIFY( struct win::pointfloat_t, 0x8 );
