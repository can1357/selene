#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryfseflags_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_QUERYFSEFLAGS]
    // => WDK 10 (NV)
    //
    union queryfseflags_t     
    {                         
        // WDK 10             
        //                    
        _m00 uint1_t  blocked;  //{ +0x0000@0  } | .Blocked
        _m01 uint32_t value;    //{ +0x0000    } | .Value
                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYFSEFLAGS.$", 0x0, false, 0x863f0f61ce64860a );        
        SDK_FIXED_SIZE( queryfseflags_t, 0x4 );        
    };                        
};
#include "magic/queryfseflags_t.end.hpp"
SDK_VERIFY( union d3dk::mt::queryfseflags_t, 0x4 );
