#pragma once
#include <sdkgen/support_library.hpp>
#include "deinterlace_tech_t.hpp"
#include "video_process_caps_t.hpp"

#include "magic/deinterlace_caps_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeinterlaceCaps]
    // => WDK 10 (NV)
    //
    struct deinterlace_caps_t                                           
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                        size;                        //{ +0x0000    } | .Size
        _m01 uint32_t                        num_previous_output_frames;  //{ +0x0004    } | .NumPreviousOutputFrames
        _m02 uint32_t                        input_pool;                  //{ +0x0008    } | .InputPool
        _m03 uint32_t                        num_forward_ref_samples;     //{ +0x000c    } | .NumForwardRefSamples
        _m04 uint32_t                        num_backward_ref_samples;    //{ +0x0010    } | .NumBackwardRefSamples
        _m05 uint32_t                        d3d_output_format;           //{ +0x0014    } | .d3dOutputFormat
        _m06 enum dxva::video_process_caps_t video_processing_caps;       //{ +0x0018    } | .VideoProcessingCaps
        _m07 enum dxva::deinterlace_tech_t   deinterlace_technology;      //{ +0x001c    } | .DeinterlaceTechnology
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_DeinterlaceCaps.$", 0x0, false, 0x8cc9100daeb7f6a7 );                           
        SDK_FIXED_SIZE( deinterlace_caps_t, 0x20 );                           
    };                                                                  
};
#include "magic/deinterlace_caps_t.end.hpp"
SDK_VERIFY( struct dxva::deinterlace_caps_t, 0x20 );
