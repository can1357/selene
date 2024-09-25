#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rgbtriple_t.start.hpp"
namespace tag
{
    // [struct tagRGBTRIPLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rgbtriple_t          
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t rgbt_blue;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .rgbtBlue
        _m01 uint8_t rgbt_green;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .rgbtGreen
        _m02 uint8_t rgbt_red;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .rgbtRed
                                
        SDK_NONVOL_PROPERTIES( "tagRGBTRIPLE.$", 0x3, true, 0xfc62b4ec0f56003f );           
        SDK_FIXED_SIZE( rgbtriple_t, 0x3 );           
    };                          
};
#include "magic/rgbtriple_t.end.hpp"
SDK_VERIFY( struct tag::rgbtriple_t, 0x3 );
