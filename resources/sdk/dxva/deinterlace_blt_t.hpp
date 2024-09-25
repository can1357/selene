#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "video_sample_t.hpp"

#include "magic/deinterlace_blt_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeinterlaceBlt]
    // => WDK 10 (NV)
    //
    struct deinterlace_blt_t                                                 
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                                    size;                 //{ +0x0000    } | .Size
        _m01 int64_t                                     rt_target;            //{ +0x0008    } | .rtTarget
        _m02 struct tag::rect_t                          dst_rect;             //{ +0x0010    } | .DstRect
        _m03 struct tag::rect_t                          src_rect;             //{ +0x0020    } | .SrcRect
        _m04 uint32_t                                    num_source_surfaces;  //{ +0x0030    } | .NumSourceSurfaces
        _m05 float                                       alpha;                //{ +0x0034    } | .Alpha
        _m06 sdk::array<struct dxva::video_sample_t, 32> source;               //{ +0x0038    } | .Source
                                                                             
        SDK_NONVOL_PROPERTIES( "_DXVA_DeinterlaceBlt.$", 0x0, false, 0x16814bfb7edaa7df );                    
        SDK_FIXED_SIZE( deinterlace_blt_t, 0x438 );                          
    };                                                                       
};
#include "magic/deinterlace_blt_t.end.hpp"
SDK_VERIFY( struct dxva::deinterlace_blt_t, 0x438 );
