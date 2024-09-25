#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wddmdevicecapsin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_WDDMDEVICECAPSIN]
    // => WDK 10 (NV)
    //
    struct wddmdevicecapsin_t                   
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t dxgkrnl_interface_version;  //{ +0x0000    } | .DxgkrnlInterfaceVersion
                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_WDDMDEVICECAPSIN.$", 0x0, false, 0x3fed2d63ddf74bfa );                          
        SDK_FIXED_SIZE( wddmdevicecapsin_t, 0x4 );                          
    };                                          
};
#include "magic/wddmdevicecapsin_t.end.hpp"
SDK_VERIFY( struct dxgk::wddmdevicecapsin_t, 0x4 );
