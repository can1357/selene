#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksr_memory_range_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_KSR_MEMORY_RANGE]
    // => WDK 10 (NV)
    //
    struct ksr_memory_range_t           
    {                                   
        // WDK 10                       
        //                              
        _m00 uint64_t memory_range_desc;  //{ +0x0000    } | .MemoryRangeDesc
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_KSR_MEMORY_RANGE.$", 0x0, false, 0x2d979d092571a889 );                  
        SDK_FIXED_SIZE( ksr_memory_range_t, 0x8 );                  
    };                                  
};
#include "magic/ksr_memory_range_t.end.hpp"
SDK_VERIFY( struct dxgk::ksr_memory_range_t, 0x8 );
