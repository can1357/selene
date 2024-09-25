#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getpostcompositioncaps_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETPOSTCOMPOSITIONCAPS]
    // => WDK 10 (NV)
    //
    struct getpostcompositioncaps_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t vid_pn_source_id;    //{ +0x0000    } | .VidPnSourceId
        _m01 float    max_stretch_factor;  //{ +0x0004    } | .MaxStretchFactor
        _m02 float    max_shrink_factor;   //{ +0x0008    } | .MaxShrinkFactor
                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETPOSTCOMPOSITIONCAPS.$", 0x0, false, 0x4da1b4e2db03c72f );                   
        SDK_FIXED_SIZE( getpostcompositioncaps_t, 0xc );                   
    };                                   
};
#include "magic/getpostcompositioncaps_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getpostcompositioncaps_t, 0xc );
