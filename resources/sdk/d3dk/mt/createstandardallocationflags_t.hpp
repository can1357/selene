#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createstandardallocationflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATESTANDARDALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct createstandardallocationflags_t
    {                                     
        // WDK 10           
        //                  
        _m00 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATESTANDARDALLOCATIONFLAGS.$", 0x0, false, 0xdefbf73794468200 );      
        SDK_FIXED_SIZE( createstandardallocationflags_t, 0x4 );      
    };                                    
};
#include "magic/createstandardallocationflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createstandardallocationflags_t, 0x4 );
