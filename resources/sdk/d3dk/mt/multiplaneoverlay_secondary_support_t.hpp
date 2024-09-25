#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplaneoverlay_secondary_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT]
    // => WDK 10 (NV)
    //
    struct multiplaneoverlay_secondary_support_t
    {                                           
        // WDK 10              
        //                     
        _m00 int32_t supported;                   //{ +0x0000    } | .Supported
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT.$", 0x0, false, 0x81e8733694cae967 );          
        SDK_FIXED_SIZE( multiplaneoverlay_secondary_support_t, 0x4 );          
    };                                          
};
#include "magic/multiplaneoverlay_secondary_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplaneoverlay_secondary_support_t, 0x4 );
