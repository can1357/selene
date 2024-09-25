#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplaneoverlay_hud_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT]
    // => WDK 10 (NV)
    //
    struct multiplaneoverlay_hud_support_t
    {                                     
        // WDK 10                      
        //                             
        _m00 uint32_t vid_pn_source_id;     //{ +0x0000    } | .VidPnSourceId
        _m01 int32_t  update;               //{ +0x0004    } | .Update
        _m02 int32_t  kernel_supported;     //{ +0x0008    } | .KernelSupported
        _m03 int32_t  hud_supported;        //{ +0x000c    } | .HudSupported
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT.$", 0x0, false, 0xdac0fc7770d48ee7 );                 
        SDK_FIXED_SIZE( multiplaneoverlay_hud_support_t, 0x10 );                 
    };                                    
};
#include "magic/multiplaneoverlay_hud_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplaneoverlay_hud_support_t, 0x10 );
