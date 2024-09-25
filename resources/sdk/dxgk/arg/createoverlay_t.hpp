#pragma once
#include <sdkgen/support_library.hpp>
#include "../overlayinfo_t.hpp"

#include "magic/createoverlay_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEOVERLAY]
    // => WDK 10 (NV)
    //
    struct createoverlay_t                               
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t                   vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 struct dxgk::overlayinfo_t overlay_info;      //{ +0x0008    } | .OverlayInfo
        _m02 void*                      h_overlay;         //{ +0x0050    } | .hOverlay
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEOVERLAY.$", 0x0, false, 0xc33bedb1406cd25 );                 
        SDK_FIXED_SIZE( createoverlay_t, 0x58 );                 
    };                                                   
};
#include "magic/createoverlay_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createoverlay_t, 0x58 );
