#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_CAPS]
    // => WDK 10 (NV)
    //
    struct brightness_caps_t              
    {                                     
        // WDK 10                         
        //                                
        _m00 uint1_t  smooth_brightness;    //{ +0x0000@0  } | .SmoothBrightness
        _m01 uint1_t  adaptive_brightness;  //{ +0x0000@1  } | .AdaptiveBrightness
        _m02 uint1_t  nits_brightness;      //{ +0x0000@2  } | .NitsBrightness
        _m03 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_CAPS.$", 0x0, false, 0x21d67aea834d5713 );                    
        SDK_FIXED_SIZE( brightness_caps_t, 0x4 );                    
    };                                    
};
#include "magic/brightness_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_caps_t, 0x4 );
