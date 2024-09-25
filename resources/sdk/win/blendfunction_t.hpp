#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/blendfunction_t.start.hpp"
namespace win
{
    // [struct _BLENDFUNCTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct blendfunction_t                 
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint8_t blend_op;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BlendOp
        _m01 uint8_t blend_flags;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .BlendFlags
        _m02 uint8_t source_constant_alpha;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .SourceConstantAlpha
        _m03 uint8_t alpha_format;           //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .AlphaFormat
                                           
        SDK_NONVOL_PROPERTIES( "_BLENDFUNCTION.$", 0x4, true, 0x80c2fd273bede1aa );                      
        SDK_FIXED_SIZE( blendfunction_t, 0x4 );                      
    };                                     
};
#include "magic/blendfunction_t.end.hpp"
SDK_VERIFY( struct win::blendfunction_t, 0x4 );
