#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_state_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_STATE]
    // => WDK 10 (NV)
    //
    struct brightness_state_t           
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  smooth_brightness;  //{ +0x0000@0  } | .SmoothBrightness
        _m01 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_STATE.$", 0x0, false, 0x70ed9b800cd1e014 );                  
        SDK_FIXED_SIZE( brightness_state_t, 0x4 );                  
    };                                  
};
#include "magic/brightness_state_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_state_t, 0x4 );
