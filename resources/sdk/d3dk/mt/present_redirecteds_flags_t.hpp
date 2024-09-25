#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/present_redirecteds_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_REDIRECTEDS_FLAGS]
    // => WDK 10 (NV)
    //
    struct present_redirecteds_flags_t
    {                                 
        // WDK 10           
        //                  
        _m00 uint32_t value;            //{ +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_REDIRECTEDS_FLAGS.$", 0x0, false, 0xab229c55a946d48a );      
        SDK_FIXED_SIZE( present_redirecteds_flags_t, 0x4 );      
    };                                
};
#include "magic/present_redirecteds_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_redirecteds_flags_t, 0x4 );
