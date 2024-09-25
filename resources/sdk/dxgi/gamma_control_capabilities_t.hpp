#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gamma_control_capabilities_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_GAMMA_CONTROL_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct gamma_control_capabilities_t                         
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 int32_t                 scale_and_offset_supported;  //{ +0x0000    } | .ScaleAndOffsetSupported
        _m01 float                   max_converted_value;         //{ +0x0004    } | .MaxConvertedValue
        _m02 float                   min_converted_value;         //{ +0x0008    } | .MinConvertedValue
        _m03 uint32_t                num_gamma_control_points;    //{ +0x000c    } | .NumGammaControlPoints
        _m04 sdk::array<float, 1025> control_point_positions;     //{ +0x0010    } | .ControlPointPositions
                                                                
        SDK_NONVOL_PROPERTIES( "DXGI_GAMMA_CONTROL_CAPABILITIES.$", 0x0, false, 0x54428016ce3540af );                           
        SDK_FIXED_SIZE( gamma_control_capabilities_t, 0x1014 );                           
    };                                                          
};
#include "magic/gamma_control_capabilities_t.end.hpp"
SDK_VERIFY( struct dxgi::gamma_control_capabilities_t, 0x1014 );
