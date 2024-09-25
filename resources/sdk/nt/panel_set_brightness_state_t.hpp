#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/panel_set_brightness_state_t.start.hpp"
namespace nt
{
    // [struct _PANEL_SET_BRIGHTNESS_STATE]
    // => WDK 10 (NV)
    //
    struct panel_set_brightness_state_t
    {                                  
        // WDK 10            
        //                   
        _m00 uint1_t  smooth;            //{ +0x0000@0  } | .Smooth
        _m01 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_PANEL_SET_BRIGHTNESS_STATE.$", 0x0, false, 0xa5895f811d8cccb3 );       
        SDK_FIXED_SIZE( panel_set_brightness_state_t, 0x4 );       
    };                                 
};
#include "magic/panel_set_brightness_state_t.end.hpp"
SDK_VERIFY( struct nt::panel_set_brightness_state_t, 0x4 );
