#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/video_output_technology_t.hpp"
#include "../d3dk/mdt/monitor_orientation_awareness_t.hpp"

#include "magic/video_output_capabilities_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIDEO_OUTPUT_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct video_output_capabilities_t                                                     
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 enum d3dk::mdt::video_output_technology_t       interface_technology;           //{ +0x0000    } | .InterfaceTechnology
        _m01 enum d3dk::mdt::monitor_orientation_awareness_t monitor_orientation_awareness;  //{ +0x0004    } | .MonitorOrientationAwareness
        _m02 uint8_t                                         supports_sdtv_modes;            //{ +0x0008    } | .SupportsSdtvModes
                                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDEO_OUTPUT_CAPABILITIES.$", 0x0, false, 0x2ca2f5e8785cc96d );                              
        SDK_FIXED_SIZE( video_output_capabilities_t, 0xc );                                
    };                                                                                     
};
#include "magic/video_output_capabilities_t.end.hpp"
SDK_VERIFY( struct dxgk::video_output_capabilities_t, 0xc );
