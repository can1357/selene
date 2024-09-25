#pragma once
#include <sdkgen/support_library.hpp>
#include "sample_format_t.hpp"

#include "magic/video_sample_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_VideoSample]
    // => WDK 10 (NV)
    //
    struct video_sample_t                                  
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 int64_t                    rt_start;            //{ +0x0000    } | .rtStart
        _m01 int64_t                    rt_end;              //{ +0x0008    } | .rtEnd
        _m02 enum dxva::sample_format_t sample_format;       //{ +0x0010    } | .SampleFormat
        _m03 void*                      lp_dds_src_surface;  //{ +0x0018    } | .lpDDSSrcSurface
                                                           
        SDK_NONVOL_PROPERTIES( "_DXVA_VideoSample.$", 0x0, false, 0xc6fe111d2941aaf7 );                   
        SDK_FIXED_SIZE( video_sample_t, 0x20 );                   
    };                                                     
};
#include "magic/video_sample_t.end.hpp"
SDK_VERIFY( struct dxva::video_sample_t, 0x20 );
