#pragma once
#include <sdkgen/support_library.hpp>
#include "../overlayinfo_t.hpp"

#include "magic/updateoverlay_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_UPDATEOVERLAY]
    // => WDK 10 (NV)
    //
    struct updateoverlay_t                           
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct dxgk::overlayinfo_t overlay_info;  //{ +0x0000    } | .OverlayInfo
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_UPDATEOVERLAY.$", 0x0, false, 0x1cb08c51200cb7e8 );             
        SDK_FIXED_SIZE( updateoverlay_t, 0x48 );             
    };                                               
};
#include "magic/updateoverlay_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::updateoverlay_t, 0x48 );
