#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/proc_amp_control_blt_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ProcAmpControlBlt]
    // => WDK 10 (NV)
    //
    struct proc_amp_control_blt_t          
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t           size;        //{ +0x0000    } | .Size
        _m01 struct tag::rect_t dst_rect;    //{ +0x0004    } | .DstRect
        _m02 struct tag::rect_t src_rect;    //{ +0x0014    } | .SrcRect
        _m03 float              alpha;       //{ +0x0024    } | .Alpha
        _m04 float              brightness;  //{ +0x0028    } | .Brightness
        _m05 float              contrast;    //{ +0x002c    } | .Contrast
        _m06 float              hue;         //{ +0x0030    } | .Hue
        _m07 float              saturation;  //{ +0x0034    } | .Saturation
                                           
        SDK_NONVOL_PROPERTIES( "_DXVA_ProcAmpControlBlt.$", 0x0, false, 0x361eeb467bed57f2 );           
        SDK_FIXED_SIZE( proc_amp_control_blt_t, 0x38 );           
    };                                     
};
#include "magic/proc_amp_control_blt_t.end.hpp"
SDK_VERIFY( struct dxva::proc_amp_control_blt_t, 0x38 );
