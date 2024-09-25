#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/gamma_ramp_rgb256x3x16_t.hpp"

#include "magic/backlight_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BACKLIGHT_INFO]
    // => WDK 10 (NV)
    //
    struct backlight_info_t                                                  
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint16_t                                  backlight_usersetting;  //{ +0x0000    } | .BacklightUsersetting
        _m01 uint16_t                                  backlight_effective;    //{ +0x0002    } | .BacklightEffective
        _m02 struct d3d::ddi::gamma_ramp_rgb256x3x16_t gamma_ramp;             //{ +0x0004    } | .GammaRamp
                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_BACKLIGHT_INFO.$", 0x0, false, 0x652530143d20706c );                      
        SDK_FIXED_SIZE( backlight_info_t, 0x604 );                           
    };                                                                       
};
#include "magic/backlight_info_t.end.hpp"
SDK_VERIFY( struct dxgk::backlight_info_t, 0x604 );
