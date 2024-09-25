#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplaneoverlay_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANEOVERLAY_SUPPORT]
    // => WDK 10 (NV)
    //
    struct multiplaneoverlay_support_t
    {                                 
        // WDK 10              
        //                     
        _m00 int32_t supported;         //{ +0x0000    } | .Supported
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANEOVERLAY_SUPPORT.$", 0x0, false, 0xf75e94ae93a6b81c );          
        SDK_FIXED_SIZE( multiplaneoverlay_support_t, 0x4 );          
    };                                
};
#include "magic/multiplaneoverlay_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplaneoverlay_support_t, 0x4 );
