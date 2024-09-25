#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/directflip_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DIRECTFLIP_SUPPORT]
    // => WDK 10 (NV)
    //
    struct directflip_support_t
    {                          
        // WDK 10              
        //                     
        _m00 int32_t supported;  //{ +0x0000    } | .Supported
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DIRECTFLIP_SUPPORT.$", 0x0, false, 0x6eb25574df3d2f76 );          
        SDK_FIXED_SIZE( directflip_support_t, 0x4 );          
    };                         
};
#include "magic/directflip_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::directflip_support_t, 0x4 );
