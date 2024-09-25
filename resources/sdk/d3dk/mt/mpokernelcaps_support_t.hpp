#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mpokernelcaps_support_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MPOKERNELCAPS_SUPPORT]
    // => WDK 10 (NV)
    //
    struct mpokernelcaps_support_t
    {                             
        // WDK 10              
        //                     
        _m00 int32_t supported;     //{ +0x0000    } | .Supported
                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MPOKERNELCAPS_SUPPORT.$", 0x0, false, 0x264dbea021ee1f52 );          
        SDK_FIXED_SIZE( mpokernelcaps_support_t, 0x4 );          
    };                            
};
#include "magic/mpokernelcaps_support_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::mpokernelcaps_support_t, 0x4 );
