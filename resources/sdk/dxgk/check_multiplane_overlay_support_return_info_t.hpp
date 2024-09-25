#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/check_multiplane_overlay_support_return_info_t.start.hpp"
namespace dxgk
{
    // [struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO]
    // => WDK 10 (NV)
    //
    struct check_multiplane_overlay_support_return_info_t
    {                                                    
        // WDK 10                   
        //                          
        _m00 uint4_t  failing_plane;                       //{ +0x0000@0  } | .FailingPlane
        _m01 uint1_t  try_again;                           //{ +0x0000@4  } | .TryAgain
        _m02 uint32_t value;                               //{ +0x0000    } | .Value
                                                         
        SDK_NONVOL_PROPERTIES( "DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.$", 0x0, false, 0x53fcf370253a1053 );              
        SDK_FIXED_SIZE( check_multiplane_overlay_support_return_info_t, 0x4 );              
    };                                                   
};
#include "magic/check_multiplane_overlay_support_return_info_t.end.hpp"
SDK_VERIFY( struct dxgk::check_multiplane_overlay_support_return_info_t, 0x4 );
