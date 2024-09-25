#pragma once
#include <sdkgen/support_library.hpp>
#include "dxgi_rgb_t.hpp"

#include "magic/gamma_ramp_dxgi_1_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_GAMMA_RAMP_DXGI_1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gamma_ramp_dxgi_1_t                                         
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                             
        _m00 struct d3d::ddi::dxgi_rgb_t                   scale;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Scale
        _m01 struct d3d::ddi::dxgi_rgb_t                   offset;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Offset
        _m02 sdk::array<struct d3d::ddi::dxgi_rgb_t, 1025> gamma_curve;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .GammaCurve
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DDDI_GAMMA_RAMP_DXGI_1.$", 0x3024, true, 0xeb6f84326734f6f3 );            
        SDK_FIXED_SIZE( gamma_ramp_dxgi_1_t, 0x3024 );                 
    };                                                                 
};
#include "magic/gamma_ramp_dxgi_1_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::gamma_ramp_dxgi_1_t, 0x3024 );
