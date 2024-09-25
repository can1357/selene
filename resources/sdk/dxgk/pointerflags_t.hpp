#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointerflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POINTERFLAGS]
    // => WDK 10 (NV)
    //
    struct pointerflags_t          
    {                              
        // WDK 10                  
        //                         
        _m00 uint1_t  monochrome;    //{ +0x0000@0  } | .Monochrome
        _m01 uint1_t  color;         //{ +0x0000@1  } | .Color
        _m02 uint1_t  masked_color;  //{ +0x0000@2  } | .MaskedColor
        _m03 uint32_t value;         //{ +0x0000    } | .Value
                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_POINTERFLAGS.$", 0x0, false, 0x91647d25bb7e85bf );             
        SDK_FIXED_SIZE( pointerflags_t, 0x4 );             
    };                             
};
#include "magic/pointerflags_t.end.hpp"
SDK_VERIFY( struct dxgk::pointerflags_t, 0x4 );
