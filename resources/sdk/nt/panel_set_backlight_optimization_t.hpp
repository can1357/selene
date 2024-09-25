#pragma once
#include <sdkgen/support_library.hpp>
#include "backlight_optimization_level_t.hpp"

#include "magic/panel_set_backlight_optimization_t.start.hpp"
namespace nt
{
    // [struct _PANEL_SET_BACKLIGHT_OPTIMIZATION]
    // => WDK 10 (NV)
    //
    struct panel_set_backlight_optimization_t              
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 enum nt::backlight_optimization_level_t level;  //{ +0x0000    } | .Level
                                                           
        SDK_NONVOL_PROPERTIES( "_PANEL_SET_BACKLIGHT_OPTIMIZATION.$", 0x0, false, 0x11b633d6d2a86ae7 );      
        SDK_FIXED_SIZE( panel_set_backlight_optimization_t, 0x4 );      
    };                                                     
};
#include "magic/panel_set_backlight_optimization_t.end.hpp"
SDK_VERIFY( struct nt::panel_set_backlight_optimization_t, 0x4 );
