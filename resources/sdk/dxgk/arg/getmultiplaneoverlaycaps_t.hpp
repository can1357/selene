#pragma once
#include <sdkgen/support_library.hpp>
#include "../multiplaneoverlaycaps_t.hpp"

#include "magic/getmultiplaneoverlaycaps_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETMULTIPLANEOVERLAYCAPS]
    // => WDK 10 (NV)
    //
    struct getmultiplaneoverlaycaps_t                                
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                             vid_pn_source_id;    //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                             max_planes;          //{ +0x0004    } | .MaxPlanes
        _m02 uint32_t                             max_rgb_planes;      //{ +0x0008    } | .MaxRGBPlanes
        _m03 uint32_t                             max_yuv_planes;      //{ +0x000c    } | .MaxYUVPlanes
        _m04 struct dxgk::multiplaneoverlaycaps_t overlay_caps;        //{ +0x0010    } | .OverlayCaps
        _m05 float                                max_stretch_factor;  //{ +0x0014    } | .MaxStretchFactor
        _m06 float                                max_shrink_factor;   //{ +0x0018    } | .MaxShrinkFactor
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.$", 0x0, false, 0x14f1eac67f5ac535 );                   
        SDK_FIXED_SIZE( getmultiplaneoverlaycaps_t, 0x1c );                   
    };                                                               
};
#include "magic/getmultiplaneoverlaycaps_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getmultiplaneoverlaycaps_t, 0x1c );
