#pragma once
#include <sdkgen/support_library.hpp>
#include "../mdt/preemption_caps_t.hpp"

#include "magic/wddm_1_2_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WDDM_1_2_CAPS]
    // => WDK 10 (NV)
    //
    struct wddm_1_2_caps_t                                                               
    {                                                                                    
        // WDK 10                                                                        
        //                                                                               
        _m00 struct d3dk::mdt::preemption_caps_t preemption_caps;                          //{ +0x0000    } | .PreemptionCaps
        _m01 uint1_t                             support_non_vga;                          //{ +0x0008@0  } | .SupportNonVGA
        _m02 uint1_t                             support_smooth_rotation;                  //{ +0x0008@1  } | .SupportSmoothRotation
        _m03 uint1_t                             support_per_engine_tdr;                   //{ +0x0008@2  } | .SupportPerEngineTDR
        _m04 uint1_t                             support_kernel_mode_command_buffer;       //{ +0x0008@3  } | .SupportKernelModeCommandBuffer
        _m05 uint1_t                             support_ccd;                              //{ +0x0008@4  } | .SupportCCD
        _m06 uint1_t                             support_software_device_bitmaps;          //{ +0x0008@5  } | .SupportSoftwareDeviceBitmaps
        _m07 uint1_t                             support_gamma_ramp;                       //{ +0x0008@6  } | .SupportGammaRamp
        _m08 uint1_t                             support_hw_cursor;                        //{ +0x0008@7  } | .SupportHWCursor
        _m09 uint1_t                             support_hwv_sync;                         //{ +0x0008@8  } | .SupportHWVSync
        _m10 uint1_t                             support_surprise_removal_in_hibernation;  //{ +0x0008@9  } | .SupportSurpriseRemovalInHibernation
        _m11 uint32_t                            value;                                    //{ +0x0008    } | .Value
                                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WDDM_1_2_CAPS.$", 0x0, false, 0x86c3741e8fc11db5 );                                        
        SDK_FIXED_SIZE( wddm_1_2_caps_t, 0xc );                                          
    };                                                                                   
};
#include "magic/wddm_1_2_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::wddm_1_2_caps_t, 0xc );
