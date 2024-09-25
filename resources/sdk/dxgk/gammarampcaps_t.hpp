#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gammarampcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GAMMARAMPCAPS]
    // => WDK 10 (NV)
    //
    struct gammarampcaps_t              
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  gamma_rgb256x3x16;  //{ +0x0000@0  } | .Gamma_Rgb256x3x16
        _m01 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_GAMMARAMPCAPS.$", 0x0, false, 0x2055d9846bdbdf2f );                  
        SDK_FIXED_SIZE( gammarampcaps_t, 0x4 );                  
    };                                  
};
#include "magic/gammarampcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::gammarampcaps_t, 0x4 );
