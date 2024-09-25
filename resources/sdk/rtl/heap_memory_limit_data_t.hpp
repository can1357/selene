#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_memory_limit_data_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_MEMORY_LIMIT_DATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_memory_limit_data_t                 
    {                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint64_t commit_limit_bytes;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommitLimitBytes
        _m01 uint64_t commit_limit_failure_code;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CommitLimitFailureCode
        _m02 uint64_t max_allocation_size_bytes;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxAllocationSizeBytes
        _m03 uint64_t allocation_limit_failure_code;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationLimitFailureCode
                                                    
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_MEMORY_LIMIT_DATA.$", 0x20, true, 0x51d39021d6feca65 );                              
        SDK_FIXED_SIZE( heap_memory_limit_data_t, 0x20 );                              
    };                                              
};
#include "magic/heap_memory_limit_data_t.end.hpp"
SDK_VERIFY( struct rtl::heap_memory_limit_data_t, 0x20 );
