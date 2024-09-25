#pragma once
#include <sdkgen/support_library.hpp>
#include "wddmversion_t.hpp"

#include "magic/wddmdevicecaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_WDDMDEVICECAPS]
    // => WDK 10 (NV)
    //
    struct wddmdevicecaps_t                        
    {                                              
        // WDK 10                                  
        //                                         
        _m00 enum dxgk::wddmversion_t wddm_version;  //{ +0x0000    } | .WDDMVersion
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_WDDMDEVICECAPS.$", 0x0, false, 0x6ccd5811fb64200f );             
        SDK_FIXED_SIZE( wddmdevicecaps_t, 0x4 );             
    };                                             
};
#include "magic/wddmdevicecaps_t.end.hpp"
SDK_VERIFY( struct dxgk::wddmdevicecaps_t, 0x4 );
