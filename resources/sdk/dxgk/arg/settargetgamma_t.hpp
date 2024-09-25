#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/gamma_ramp_t.hpp"

#include "magic/settargetgamma_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTARGETGAMMA]
    // => WDK 10 (NV)
    //
    struct settargetgamma_t                            
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint32_t                       target_id;   //{ +0x0000    } | .TargetId
        _m01 struct d3dk::mdt::gamma_ramp_t gamma_ramp;  //{ +0x0008    } | .GammaRamp
                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTARGETGAMMA.$", 0x0, false, 0x1e5af5b8cfaf791f );           
        SDK_FIXED_SIZE( settargetgamma_t, 0x20 );           
    };                                                 
};
#include "magic/settargetgamma_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settargetgamma_t, 0x20 );
