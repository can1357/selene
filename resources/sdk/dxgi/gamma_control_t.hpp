#pragma once
#include <sdkgen/support_library.hpp>
#include "rgb_t.hpp"

#include "magic/gamma_control_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_GAMMA_CONTROL]
    // => WDK 10 (NV)
    //
    struct gamma_control_t                                    
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct dxgi::rgb_t                   scale;        //{ +0x0000    } | .Scale
        _m01 struct dxgi::rgb_t                   offset;       //{ +0x000c    } | .Offset
        _m02 sdk::array<struct dxgi::rgb_t, 1025> gamma_curve;  //{ +0x0018    } | .GammaCurve
                                                              
        SDK_NONVOL_PROPERTIES( "DXGI_GAMMA_CONTROL.$", 0x0, false, 0xd1981242fc709322 );            
        SDK_FIXED_SIZE( gamma_control_t, 0x3024 );            
    };                                                        
};
#include "magic/gamma_control_t.end.hpp"
SDK_VERIFY( struct dxgi::gamma_control_t, 0x3024 );
