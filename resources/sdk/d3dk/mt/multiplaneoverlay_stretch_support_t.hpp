#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplaneoverlay_stretch_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT]
    // => WDK 10 (NV)
    //
    struct multiplaneoverlay_stretch_support_t
    {                                         
        // WDK 10                      
        //                             
        _m00 uint32_t vid_pn_source_id;         //{ +0x0000    } | .VidPnSourceId
        _m01 int32_t  update;                   //{ +0x0004    } | .Update
        _m02 int32_t  supported;                //{ +0x0008    } | .Supported
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT.$", 0x0, false, 0x764b1ecbaf8da7d6 );                 
        SDK_FIXED_SIZE( multiplaneoverlay_stretch_support_t, 0xc );                 
    };                                        
};
#include "magic/multiplaneoverlay_stretch_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplaneoverlay_stretch_support_t, 0xc );
