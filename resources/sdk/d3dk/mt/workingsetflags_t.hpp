#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/workingsetflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WORKINGSETFLAGS]
    // => WDK 10 (NV)
    //
    struct workingsetflags_t     
    {                            
        // WDK 10                
        //                       
        _m00 uint1_t use_default;  //{ +0x0000@0  } | .UseDefault
                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WORKINGSETFLAGS.$", 0x0, false, 0x17c5c9c62514716c );            
        SDK_FIXED_SIZE( workingsetflags_t, 0x4 );            
    };                           
};
#include "magic/workingsetflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::workingsetflags_t, 0x4 );
