#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gamma_ramp_rgb256x3x16_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_GAMMA_RAMP_RGB256x3x16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gamma_ramp_rgb256x3x16_t          
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                   
        _m00 sdk::array<uint16_t, 256> red;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Red
        _m01 sdk::array<uint16_t, 256> green;  //{ +0x0200    +0x0200    +0x0200    +0x0200    +0x0200    } | .Green
        _m02 sdk::array<uint16_t, 256> blue;   //{ +0x0400    +0x0400    +0x0400    +0x0400    +0x0400    } | .Blue
                                             
        SDK_NONVOL_PROPERTIES( "_D3DDDI_GAMMA_RAMP_RGB256x3x16.$", 0x600, true, 0x95a82963200e56b3 );      
        SDK_FIXED_SIZE( gamma_ramp_rgb256x3x16_t, 0x600 );      
    };                                       
};
#include "magic/gamma_ramp_rgb256x3x16_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::gamma_ramp_rgb256x3x16_t, 0x600 );
