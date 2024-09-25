#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "ayu_vsample2_t.hpp"
#include "video_sample2_t.hpp"

#include "magic/deinterlace_blt_ex_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeinterlaceBltEx]
    // => WDK 10 (NV)
    //
    struct deinterlace_blt_ex_t                                               
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                     size;                 //{ +0x0000    } | .Size
        _m01 struct dxva::ayu_vsample2_t                  background_color;     //{ +0x0004    } | .BackgroundColor
        _m02 struct tag::rect_t                           rc_target;            //{ +0x0008    } | .rcTarget
        _m03 int64_t                                      rt_target;            //{ +0x0018    } | .rtTarget
        _m04 uint32_t                                     num_source_surfaces;  //{ +0x0020    } | .NumSourceSurfaces
        _m05 float                                        alpha;                //{ +0x0024    } | .Alpha
        _m06 sdk::array<struct dxva::video_sample2_t, 32> source;               //{ +0x0028    } | .Source
        _m07 uint32_t                                     destination_format;   //{ +0x1128    } | .DestinationFormat
        _m08 uint32_t                                     destination_flags;    //{ +0x112c    } | .DestinationFlags
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXVA_DeinterlaceBltEx.$", 0x0, false, 0x6e1069f4eb7c7c67 );                    
        SDK_FIXED_SIZE( deinterlace_blt_ex_t, 0x1130 );                       
    };                                                                        
};
#include "magic/deinterlace_blt_ex_t.end.hpp"
SDK_VERIFY( struct dxva::deinterlace_blt_ex_t, 0x1130 );
