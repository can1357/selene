#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/panelfitter_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PANELFITTER_SUPPORT]
    // => WDK 10 (NV)
    //
    struct panelfitter_support_t
    {                           
        // WDK 10              
        //                     
        _m00 int32_t supported;   //{ +0x0000    } | .Supported
                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PANELFITTER_SUPPORT.$", 0x0, false, 0x4cc1c5576143e29c );          
        SDK_FIXED_SIZE( panelfitter_support_t, 0x4 );          
    };                          
};
#include "magic/panelfitter_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::panelfitter_support_t, 0x4 );
