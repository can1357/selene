#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/independentflip_secondary_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT]
    // => WDK 10 (NV)
    //
    struct independentflip_secondary_support_t
    {                                         
        // WDK 10              
        //                     
        _m00 int32_t supported;                 //{ +0x0000    } | .Supported
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT.$", 0x0, false, 0xe5fdfdad63c54320 );          
        SDK_FIXED_SIZE( independentflip_secondary_support_t, 0x4 );          
    };                                        
};
#include "magic/independentflip_secondary_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::independentflip_secondary_support_t, 0x4 );
