#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gamma_ramp_rgb_t.start.hpp"
namespace nt
{
    // [struct _GAMMA_RAMP_RGB]
    // => WDK 10 (NV)
    //
    struct gamma_ramp_rgb_t
    {                      
        // WDK 10        
        //               
        _m00 float red;      //{ +0x0000    } | .Red
        _m01 float green;    //{ +0x0004    } | .Green
        _m02 float blue;     //{ +0x0008    } | .Blue
                           
        SDK_NONVOL_PROPERTIES( "_GAMMA_RAMP_RGB.$", 0x0, false, 0xb07e99b1b2b8406b );      
        SDK_FIXED_SIZE( gamma_ramp_rgb_t, 0xc );      
    };                     
};
#include "magic/gamma_ramp_rgb_t.end.hpp"
SDK_VERIFY( struct nt::gamma_ramp_rgb_t, 0xc );
