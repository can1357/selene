#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rgbquad_t.start.hpp"
namespace tag
{
    // [struct tagRGBQUAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rgbquad_t              
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint8_t rgb_blue;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .rgbBlue
        _m01 uint8_t rgb_green;     //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .rgbGreen
        _m02 uint8_t rgb_red;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .rgbRed
        _m03 uint8_t rgb_reserved;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .rgbReserved
                                  
        SDK_NONVOL_PROPERTIES( "tagRGBQUAD.$", 0x4, true, 0xf5a5a70013b0b214 );             
        SDK_FIXED_SIZE( rgbquad_t, 0x4 );             
    };                            
};
#include "magic/rgbquad_t.end.hpp"
SDK_VERIFY( struct tag::rgbquad_t, 0x4 );
