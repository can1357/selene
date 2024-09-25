#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_ramp_rgb_t.hpp"

#include "magic/gamma_ramp_dxgi_1_t.start.hpp"
namespace nt
{
    // [struct _GAMMA_RAMP_DXGI_1]
    // => WDK 10 (NV)
    //
    struct gamma_ramp_dxgi_1_t                                         
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 struct nt::gamma_ramp_rgb_t                   scale;        //{ +0x0000    } | .Scale
        _m01 struct nt::gamma_ramp_rgb_t                   offset;       //{ +0x000c    } | .Offset
        _m02 sdk::array<struct nt::gamma_ramp_rgb_t, 1025> gamma_curve;  //{ +0x0018    } | .GammaCurve
                                                                       
        SDK_NONVOL_PROPERTIES( "_GAMMA_RAMP_DXGI_1.$", 0x0, false, 0xd070f856685e6c8 );            
        SDK_FIXED_SIZE( gamma_ramp_dxgi_1_t, 0x3024 );                 
    };                                                                 
};
#include "magic/gamma_ramp_dxgi_1_t.end.hpp"
SDK_VERIFY( struct nt::gamma_ramp_dxgi_1_t, 0x3024 );
