#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "ayu_vsample2_t.hpp"

#include "magic/video_sample32_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_VideoSample32]
    // => WDK 10 (NV)
    //
    struct video_sample32_t                                                 
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 int64_t                                     rt_start;            //{ +0x0000    } | .rtStart
        _m01 int64_t                                     rt_end;              //{ +0x0008    } | .rtEnd
        _m02 uint32_t                                    sample_format;       //{ +0x0010    } | .SampleFormat
        _m03 uint32_t                                    sample_flags;        //{ +0x0014    } | .SampleFlags
        _m04 uint32_t                                    lp_dds_src_surface;  //{ +0x0018    } | .lpDDSSrcSurface
        _m05 struct tag::rect_t                          rc_src;              //{ +0x001c    } | .rcSrc
        _m06 struct tag::rect_t                          rc_dst;              //{ +0x002c    } | .rcDst
        _m07 sdk::array<struct dxva::ayu_vsample2_t, 16> palette;             //{ +0x003c    } | .Palette
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXVA_VideoSample32.$", 0x0, false, 0xeed2b7bf3288567d );                   
        SDK_FIXED_SIZE( video_sample32_t, 0x80 );                           
    };                                                                      
};
#include "magic/video_sample32_t.end.hpp"
SDK_VERIFY( struct dxva::video_sample32_t, 0x80 );
