#pragma once
#include <sdkgen/support_library.hpp>
#include "../pointerflags_t.hpp"

#include "magic/setpointershape_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETPOINTERSHAPE]
    // => WDK 10 (NV)
    //
    struct setpointershape_t                              
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 struct dxgk::pointerflags_t flags;             //{ +0x0000    } | .Flags
        _m01 uint32_t                    width;             //{ +0x0004    } | .Width
        _m02 uint32_t                    height;            //{ +0x0008    } | .Height
        _m03 uint32_t                    pitch;             //{ +0x000c    } | .Pitch
        _m04 uint32_t                    vid_pn_source_id;  //{ +0x0010    } | .VidPnSourceId
        _m05 const void*                 p_pixels;          //{ +0x0018    } | .pPixels
        _m06 uint32_t                    x_hot;             //{ +0x0020    } | .XHot
        _m07 uint32_t                    y_hot;             //{ +0x0024    } | .YHot
                                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETPOINTERSHAPE.$", 0x0, false, 0xd15464c4e51e99b4 );                 
        SDK_FIXED_SIZE( setpointershape_t, 0x28 );                 
    };                                                    
};
#include "magic/setpointershape_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setpointershape_t, 0x28 );
