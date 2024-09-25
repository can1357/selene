#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/display_brightness_t.start.hpp"
namespace nt
{
    // [struct _DISPLAY_BRIGHTNESS]
    // => WDK 10 (NV)
    //
    struct display_brightness_t        
    {                                  
        // WDK 10                      
        //                             
        _m00 uint8_t uc_display_policy;  //{ +0x0000    } | .ucDisplayPolicy
        _m01 uint8_t uc_ac_brightness;   //{ +0x0001    } | .ucACBrightness
        _m02 uint8_t uc_dc_brightness;   //{ +0x0002    } | .ucDCBrightness
                                       
        SDK_NONVOL_PROPERTIES( "_DISPLAY_BRIGHTNESS.$", 0x0, false, 0xf5a6f8d9109955d0 );                  
        SDK_FIXED_SIZE( display_brightness_t, 0x3 );                  
    };                                 
};
#include "magic/display_brightness_t.end.hpp"
SDK_VERIFY( struct nt::display_brightness_t, 0x3 );
