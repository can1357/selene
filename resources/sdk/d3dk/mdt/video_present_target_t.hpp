#pragma once
#include <sdkgen/support_library.hpp>
#include "video_output_technology_t.hpp"
#include "monitor_orientation_awareness_t.hpp"
#include "../../dxgk/child_device_hpd_awareness_t.hpp"

#include "magic/video_present_target_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDEO_PRESENT_TARGET]
    // => WDK 10 (NV)
    //
    struct video_present_target_t                                                          
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 uint32_t                                        id;                             //{ +0x0000    } | .Id
        _m01 enum d3dk::mdt::video_output_technology_t       video_output_technology;        //{ +0x0004    } | .VideoOutputTechnology
        _m02 enum dxgk::child_device_hpd_awareness_t         video_output_hpd_awareness;     //{ +0x0008    } | .VideoOutputHpdAwareness
        _m03 enum d3dk::mdt::monitor_orientation_awareness_t monitor_orientation_awareness;  //{ +0x000c    } | .MonitorOrientationAwareness
        _m04 uint8_t                                         supports_sdtv_modes;            //{ +0x0010    } | .SupportsSdtvModes
                                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDEO_PRESENT_TARGET.$", 0x0, false, 0xc04ca5c363abda99 );                              
        SDK_FIXED_SIZE( video_present_target_t, 0x14 );                                    
    };                                                                                     
};
#include "magic/video_present_target_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::video_present_target_t, 0x14 );
