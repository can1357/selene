#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_format_and_preference_t.start.hpp"
namespace d3dk::mdt
{
    // [union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union wire_format_and_preference_t
    {                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 int2_t   preference;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Preference
        _m01 uint6_t  rgb;              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Rgb
        _m02 uint6_t  y_cb_cr444;       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .YCbCr444
        _m03 uint6_t  y_cb_cr422;       //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .YCbCr422
        _m04 uint6_t  y_cb_cr420;       //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .YCbCr420
        _m05 uint6_t  intensity;        //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .Intensity
        _m06 uint32_t value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.$", 0x4, true, 0xb934f11c580e08de );           
        SDK_FIXED_SIZE( wire_format_and_preference_t, 0x4 );           
    };                                
};
#include "magic/wire_format_and_preference_t.end.hpp"
SDK_VERIFY( union d3dk::mdt::wire_format_and_preference_t, 0x4 );
