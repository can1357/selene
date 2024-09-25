#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/color_capabilities_t.start.hpp"
namespace video
{
    // [struct _VIDEO_COLOR_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct color_capabilities_t             
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t length;                 //{ +0x0000    } | .Length
        _m01 uint32_t attribute_flags;        //{ +0x0004    } | .AttributeFlags
        _m02 int32_t  red_phosphore_decay;    //{ +0x0008    } | .RedPhosphoreDecay
        _m03 int32_t  green_phosphore_decay;  //{ +0x000c    } | .GreenPhosphoreDecay
        _m04 int32_t  blue_phosphore_decay;   //{ +0x0010    } | .BluePhosphoreDecay
        _m05 int32_t  white_chromaticity_x;   //{ +0x0014    } | .WhiteChromaticity_x
        _m06 int32_t  white_chromaticity_y;   //{ +0x0018    } | .WhiteChromaticity_y
        _m07 int32_t  white_chromaticity_y_;  //{ +0x001c    } | .WhiteChromaticity_Y
        _m08 int32_t  red_chromaticity_x;     //{ +0x0020    } | .RedChromaticity_x
        _m09 int32_t  red_chromaticity_y;     //{ +0x0024    } | .RedChromaticity_y
        _m10 int32_t  green_chromaticity_x;   //{ +0x0028    } | .GreenChromaticity_x
        _m11 int32_t  green_chromaticity_y;   //{ +0x002c    } | .GreenChromaticity_y
        _m12 int32_t  blue_chromaticity_x;    //{ +0x0030    } | .BlueChromaticity_x
        _m13 int32_t  blue_chromaticity_y;    //{ +0x0034    } | .BlueChromaticity_y
        _m14 int32_t  white_gamma;            //{ +0x0038    } | .WhiteGamma
        _m15 int32_t  red_gamma;              //{ +0x003c    } | .RedGamma
        _m16 int32_t  green_gamma;            //{ +0x0040    } | .GreenGamma
        _m17 int32_t  blue_gamma;             //{ +0x0044    } | .BlueGamma
                                            
        SDK_NONVOL_PROPERTIES( "_VIDEO_COLOR_CAPABILITIES.$", 0x0, false, 0xa88e05191e0f9f67 );                      
        SDK_FIXED_SIZE( color_capabilities_t, 0x48 );                      
    };                                      
};
#include "magic/color_capabilities_t.end.hpp"
SDK_VERIFY( struct video::color_capabilities_t, 0x48 );
