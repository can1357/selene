#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_amp_control_caps_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ProcAmpControlCaps]
    // => WDK 10 (NV)
    //
    struct proc_amp_control_caps_t           
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t size;                    //{ +0x0000    } | .Size
        _m01 uint32_t input_pool;              //{ +0x0004    } | .InputPool
        _m02 uint32_t d3d_output_format;       //{ +0x0008    } | .d3dOutputFormat
        _m03 uint32_t proc_amp_control_props;  //{ +0x000c    } | .ProcAmpControlProps
        _m04 uint32_t video_processing_caps;   //{ +0x0010    } | .VideoProcessingCaps
                                             
        SDK_NONVOL_PROPERTIES( "_DXVA_ProcAmpControlCaps.$", 0x0, false, 0xc03728f88235db1e );                       
        SDK_FIXED_SIZE( proc_amp_control_caps_t, 0x14 );                       
    };                                       
};
#include "magic/proc_amp_control_caps_t.end.hpp"
SDK_VERIFY( struct dxva::proc_amp_control_caps_t, 0x14 );
