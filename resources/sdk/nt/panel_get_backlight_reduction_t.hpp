#pragma once
#include <sdkgen/support_library.hpp>
#include "backlight_reduction_gamma_ramp_t.hpp"

#include "magic/panel_get_backlight_reduction_t.start.hpp"
namespace nt
{
    // [struct _PANEL_GET_BACKLIGHT_REDUCTION]
    // => WDK 10 (NV)
    //
    struct panel_get_backlight_reduction_t                                     
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint16_t                                    backlight_usersetting;  //{ +0x0000    } | .BacklightUsersetting
        _m01 uint16_t                                    backlight_effective;    //{ +0x0002    } | .BacklightEffective
        _m02 struct nt::backlight_reduction_gamma_ramp_t gamma_ramp;             //{ +0x0004    } | .GammaRamp
                                                                               
        SDK_NONVOL_PROPERTIES( "_PANEL_GET_BACKLIGHT_REDUCTION.$", 0x0, false, 0xe505ccdaf691d6e3 );                      
        SDK_FIXED_SIZE( panel_get_backlight_reduction_t, 0x604 );                      
    };                                                                         
};
#include "magic/panel_get_backlight_reduction_t.end.hpp"
SDK_VERIFY( struct nt::panel_get_backlight_reduction_t, 0x604 );
