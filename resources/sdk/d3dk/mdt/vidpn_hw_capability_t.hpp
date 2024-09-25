#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpn_hw_capability_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_HW_CAPABILITY]
    // => WDK 10 (NV)
    //
    struct vidpn_hw_capability_t                   
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint1_t driver_rotation;                //{ +0x0000@0  } | .DriverRotation
        _m01 uint1_t driver_scaling;                 //{ +0x0000@1  } | .DriverScaling
        _m02 uint1_t driver_cloning;                 //{ +0x0000@2  } | .DriverCloning
        _m03 uint1_t driver_color_convert;           //{ +0x0000@3  } | .DriverColorConvert
        _m04 uint1_t driver_linked_adapater_output;  //{ +0x0000@4  } | .DriverLinkedAdapaterOutput
        _m05 uint1_t driver_remote_display;          //{ +0x0000@5  } | .DriverRemoteDisplay
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_HW_CAPABILITY.$", 0x0, false, 0xcdfa58aa0917f2b1 );                              
        SDK_FIXED_SIZE( vidpn_hw_capability_t, 0x4 );                              
    };                                             
};
#include "magic/vidpn_hw_capability_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_hw_capability_t, 0x4 );
