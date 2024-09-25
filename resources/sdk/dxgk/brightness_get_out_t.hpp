#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_get_out_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_GET_OUT]
    // => WDK 10 (NV)
    //
    struct brightness_get_out_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t current_brightness_millinits;  //{ +0x0000    } | .CurrentBrightnessMillinits
        _m01 uint32_t target_brightness_millinits;   //{ +0x0004    } | .TargetBrightnessMillinits
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_GET_OUT.$", 0x0, false, 0x1e70771e5a81e612 );                             
        SDK_FIXED_SIZE( brightness_get_out_t, 0x8 );                             
    };                                             
};
#include "magic/brightness_get_out_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_get_out_t, 0x8 );
