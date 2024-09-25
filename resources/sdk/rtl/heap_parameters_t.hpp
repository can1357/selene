#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_parameters_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_parameters_t                                            
    {                                                                   
        using prtl_heap_commit_routine_t = sdk::function<int32_t(void*, void**, uint64_t*)>*;                               
                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                              
        _m00 uint32_t                    length;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t                    segment_reserve;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SegmentReserve
        _m02 uint64_t                    segment_commit;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentCommit
        _m03 uint64_t                    de_commit_free_block_threshold;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeCommitFreeBlockThreshold
        _m04 uint64_t                    de_commit_total_free_threshold;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DeCommitTotalFreeThreshold
        _m05 uint64_t                    maximum_allocation_size;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MaximumAllocationSize
        _m06 uint64_t                    virtual_memory_threshold;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .VirtualMemoryThreshold
        _m07 uint64_t                    initial_commit;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .InitialCommit
        _m08 uint64_t                    initial_reserve;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .InitialReserve
        _m09 prtl_heap_commit_routine_t  commit_routine;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .CommitRoutine
                                                                        
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_PARAMETERS.$", 0x60, true, 0x4d7fd9cf9706890 );                               
        SDK_FIXED_SIZE( heap_parameters_t, 0x60 );                               
    };                                                                  
};
#include "magic/heap_parameters_t.end.hpp"
SDK_VERIFY( struct rtl::heap_parameters_t, 0x60 );
