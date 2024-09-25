#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracast_display_device_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS]
    // => WDK 10 (NV)
    //
    struct miracast_display_device_caps_t  
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint8_t  hdcp_supported;        //{ +0x0000    } | .HdcpSupported
        _m01 uint32_t default_control_port;  //{ +0x0004    } | .DefaultControlPort
        _m02 uint8_t  uses_ihv_solution;     //{ +0x0008    } | .UsesIhvSolution
                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS.$", 0x0, false, 0xa728d139b976ee22 );                     
        SDK_FIXED_SIZE( miracast_display_device_caps_t, 0xc );                     
    };                                     
};
#include "magic/miracast_display_device_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::miracast_display_device_caps_t, 0xc );
