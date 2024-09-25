#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/backlight_reduction_gamma_ramp_t.start.hpp"
namespace nt
{
    // [struct _BACKLIGHT_REDUCTION_GAMMA_RAMP]
    // => WDK 10 (NV)
    //
    struct backlight_reduction_gamma_ramp_t
    {                                      
        // WDK 10                        
        //                               
        _m00 sdk::array<uint16_t, 256> r;    //{ +0x0000    } | .R
        _m01 sdk::array<uint16_t, 256> g;    //{ +0x0200    } | .G
        _m02 sdk::array<uint16_t, 256> b;    //{ +0x0400    } | .B
                                           
        SDK_NONVOL_PROPERTIES( "_BACKLIGHT_REDUCTION_GAMMA_RAMP.$", 0x0, false, 0xd86498464a0835e8 );  
        SDK_FIXED_SIZE( backlight_reduction_gamma_ramp_t, 0x600 );  
    };                                     
};
#include "magic/backlight_reduction_gamma_ramp_t.end.hpp"
SDK_VERIFY( struct nt::backlight_reduction_gamma_ramp_t, 0x600 );
