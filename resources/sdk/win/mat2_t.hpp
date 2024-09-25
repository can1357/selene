#pragma once
#include <sdkgen/support_library.hpp>
#include "fixed_t.hpp"

#include "magic/mat2_t.start.hpp"
namespace win
{
    // [struct _MAT2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mat2_t                      
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                             
        _m00 struct win::fixed_t e_m11;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .eM11
        _m01 struct win::fixed_t e_m12;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .eM12
        _m02 struct win::fixed_t e_m21;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .eM21
        _m03 struct win::fixed_t e_m22;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .eM22
                                       
        SDK_NONVOL_PROPERTIES( "_MAT2.$", 0x10, true, 0x748236031c24b80e );      
        SDK_FIXED_SIZE( mat2_t, 0x10 );      
    };                                 
};
#include "magic/mat2_t.end.hpp"
SDK_VERIFY( struct win::mat2_t, 0x10 );
