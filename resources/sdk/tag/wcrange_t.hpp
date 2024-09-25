#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wcrange_t.start.hpp"
namespace tag
{
    // [struct tagWCRANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wcrange_t           
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 wchar_t  wc_low;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .wcLow
        _m01 uint16_t c_glyphs;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .cGlyphs
                               
        SDK_NONVOL_PROPERTIES( "tagWCRANGE.$", 0x4, true, 0xeea9f621a23a7fab );         
        SDK_FIXED_SIZE( wcrange_t, 0x4 );         
    };                         
};
#include "magic/wcrange_t.end.hpp"
SDK_VERIFY( struct tag::wcrange_t, 0x4 );
