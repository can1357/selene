#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipinfoflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPINFOFLAGS]
    // => WDK 10 (NV)
    //
    struct flipinfoflags_t         
    {                              
        // WDK 10                  
        //                         
        _m00 uint1_t flip_interval;  //{ +0x0000@0  } | .FlipInterval
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPINFOFLAGS.$", 0x0, false, 0x8cf422079f27b0f8 );              
        SDK_FIXED_SIZE( flipinfoflags_t, 0x4 );              
    };                             
};
#include "magic/flipinfoflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flipinfoflags_t, 0x4 );
