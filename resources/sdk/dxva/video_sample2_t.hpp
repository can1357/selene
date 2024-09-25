#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "ayu_vsample2_t.hpp"

#include "magic/video_sample2_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_VideoSample2]
    // => WDK 10 (NV)
    //
    struct video_sample2_t                                                  
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                    size;                //{ +0x0000    } | .Size
        _m01 int64_t                                     rt_start;            //{ +0x0008    } | .rtStart
        _m02 int64_t                                     rt_end;              //{ +0x0010    } | .rtEnd
        _m03 uint32_t                                    sample_format;       //{ +0x0018    } | .SampleFormat
        _m04 uint32_t                                    sample_flags;        //{ +0x001c    } | .SampleFlags
        _m05 void*                                       lp_dds_src_surface;  //{ +0x0020    } | .lpDDSSrcSurface
        _m06 struct tag::rect_t                          rc_src;              //{ +0x0028    } | .rcSrc
        _m07 struct tag::rect_t                          rc_dst;              //{ +0x0038    } | .rcDst
        _m08 sdk::array<struct dxva::ayu_vsample2_t, 16> palette;             //{ +0x0048    } | .Palette
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXVA_VideoSample2.$", 0x0, false, 0xc38cd2a93f2788ee );                   
        SDK_FIXED_SIZE( video_sample2_t, 0x88 );                            
    };                                                                      
};
#include "magic/video_sample2_t.end.hpp"
SDK_VERIFY( struct dxva::video_sample2_t, 0x88 );
