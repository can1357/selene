#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hwdrm_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_HWDRM_SUPPORT]
    // => WDK 10 (NV)
    //
    struct hwdrm_support_t     
    {                          
        // WDK 10              
        //                     
        _m00 uint8_t supported;  //{ +0x0000    } | .Supported
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_HWDRM_SUPPORT.$", 0x0, false, 0x1ed9be130b0d0f5 );          
        SDK_FIXED_SIZE( hwdrm_support_t, 0x1 );          
    };                         
};
#include "magic/hwdrm_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::hwdrm_support_t, 0x1 );
