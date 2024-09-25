#pragma once
#include <sdkgen/support_library.hpp>
#include "frequency_t.hpp"

#include "magic/video_desc_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_VideoDesc]
    // => WDK 10 (NV)
    //
    struct video_desc_t                                 
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t                 size;               //{ +0x0000    } | .Size
        _m01 uint32_t                 sample_width;       //{ +0x0004    } | .SampleWidth
        _m02 uint32_t                 sample_height;      //{ +0x0008    } | .SampleHeight
        _m03 uint32_t                 sample_format;      //{ +0x000c    } | .SampleFormat
        _m04 uint32_t                 d3d_format;         //{ +0x0010    } | .d3dFormat
        _m05 struct dxva::frequency_t input_sample_freq;  //{ +0x0014    } | .InputSampleFreq
        _m06 struct dxva::frequency_t output_frame_freq;  //{ +0x001c    } | .OutputFrameFreq
                                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_VideoDesc.$", 0x0, false, 0xd97dd81c13b116c6 );                  
        SDK_FIXED_SIZE( video_desc_t, 0x24 );                  
    };                                                  
};
#include "magic/video_desc_t.end.hpp"
SDK_VERIFY( struct dxva::video_desc_t, 0x24 );
