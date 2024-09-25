#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualgpucapability_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUCAPABILITY]
    // => WDK 10 (NV)
    //
    struct virtualgpucapability_t   
    {                               
        // WDK 10                   
        //                          
        _m00 uint64_t min_value;      //{ +0x0000    } | .MinValue
        _m01 uint64_t max_value;      //{ +0x0008    } | .MaxValue
        _m02 uint64_t optimal_value;  //{ +0x0010    } | .OptimalValue
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUCAPABILITY.$", 0x0, false, 0x8cdcb70d9fc2d0e4 );              
        SDK_FIXED_SIZE( virtualgpucapability_t, 0x18 );              
    };                              
};
#include "magic/virtualgpucapability_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpucapability_t, 0x18 );
