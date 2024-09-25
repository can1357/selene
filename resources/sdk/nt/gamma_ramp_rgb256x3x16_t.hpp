#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gamma_ramp_rgb256x3x16_t.start.hpp"
namespace nt
{
    // [struct _GAMMA_RAMP_RGB256x3x16]
    // => WDK 10 (NV)
    //
    struct gamma_ramp_rgb256x3x16_t          
    {                                        
        // WDK 10                            
        //                                   
        _m00 sdk::array<uint16_t, 256> red;    //{ +0x0000    } | .Red
        _m01 sdk::array<uint16_t, 256> green;  //{ +0x0200    } | .Green
        _m02 sdk::array<uint16_t, 256> blue;   //{ +0x0400    } | .Blue
                                             
        SDK_NONVOL_PROPERTIES( "_GAMMA_RAMP_RGB256x3x16.$", 0x0, false, 0x149c8e39198ab7ee );      
        SDK_FIXED_SIZE( gamma_ramp_rgb256x3x16_t, 0x600 );      
    };                                       
};
#include "magic/gamma_ramp_rgb256x3x16_t.end.hpp"
SDK_VERIFY( struct nt::gamma_ramp_rgb256x3x16_t, 0x600 );
