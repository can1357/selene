#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/zero_cost_counts_t.start.hpp"
namespace mi
{
    // [struct _MI_ZERO_COST_COUNTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct zero_cost_counts_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t native_sum;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NativeSum
                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2              
        //                          
        _m01 uint64_t cached_sum;     //{ +0x0008    +0x0008    +0x0008    } | .CachedSum
                                    
        // Windows 11               
        //                          
        _m02 uint64_t alternate_sum;  //{ +0x0008    } | .AlternateSum
                                    
        SDK_MAGIC_PROPERTIES( "_MI_ZERO_COST_COUNTS.$", 0x10, true, 0x2dd9e4773dd4e51 );              
        SDK_FIXED_SIZE( zero_cost_counts_t, 0x10 );              
    };                              
};
#include "magic/zero_cost_counts_t.end.hpp"
SDK_VERIFY( struct mi::zero_cost_counts_t, 0x10 );
