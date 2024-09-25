#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trimprocesscommitment_flags_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS]
    // => WDK 10 (NV)
    //
    union trimprocesscommitment_flags_t
    {                                  
        // WDK 10                     
        //                            
        _m00 uint1_t  lazy;              //{ +0x0000@0  } | .Lazy
        _m01 uint1_t  only_repurposed;   //{ +0x0000@1  } | .OnlyRepurposed
        _m02 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS.$", 0x0, false, 0x8051232321eb32f0 );                
        SDK_FIXED_SIZE( trimprocesscommitment_flags_t, 0x4 );                
    };                                 
};
#include "magic/trimprocesscommitment_flags_t.end.hpp"
SDK_VERIFY( union d3dk::mt::trimprocesscommitment_flags_t, 0x4 );
