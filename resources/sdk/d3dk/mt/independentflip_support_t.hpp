#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/independentflip_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_INDEPENDENTFLIP_SUPPORT]
    // => WDK 10 (NV)
    //
    struct independentflip_support_t
    {                               
        // WDK 10              
        //                     
        _m00 int32_t supported;       //{ +0x0000    } | .Supported
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_INDEPENDENTFLIP_SUPPORT.$", 0x0, false, 0xf5fd89abc99921a9 );          
        SDK_FIXED_SIZE( independentflip_support_t, 0x4 );          
    };                              
};
#include "magic/independentflip_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::independentflip_support_t, 0x4 );
