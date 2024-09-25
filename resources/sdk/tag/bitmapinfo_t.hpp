#pragma once
#include <sdkgen/support_library.hpp>
#include "rgbquad_t.hpp"
#include "bitmapinfoheader_t.hpp"

#include "magic/bitmapinfo_t.start.hpp"
namespace tag
{
    // [struct tagBITMAPINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmapinfo_t                                      
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                   
        _m00 struct tag::bitmapinfoheader_t       bmi_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bmiHeader
        _m01 sdk::array<struct tag::rgbquad_t, 1> bmi_colors;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .bmiColors
                                                             
        SDK_NONVOL_PROPERTIES( "tagBITMAPINFO.$", 0x2c, true, 0xaa97d255cfeb2b81 );           
        SDK_FIXED_SIZE( bitmapinfo_t, 0x2c );                
    };                                                       
};
#include "magic/bitmapinfo_t.end.hpp"
SDK_VERIFY( struct tag::bitmapinfo_t, 0x2c );
