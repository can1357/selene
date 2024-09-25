#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_heap_performance_counter_information_t.start.hpp"
namespace win
{
    // [struct _SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_heap_performance_counter_information_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t segment_reserve_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SegmentReserveSize
        _m01 uint64_t segment_commit_size;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SegmentCommitSize
        _m02 uint64_t segment_count;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentCount
        _m03 uint64_t allocated_size;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocatedSize
        _m04 uint64_t large_alloc_reserve_size;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LargeAllocReserveSize
        _m05 uint64_t large_alloc_commit_size;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LargeAllocCommitSize
                                                         
        SDK_MAGIC_PROPERTIES( "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.$", 0x30, true, 0xf468dc66fe6bb4f );                         
        SDK_FIXED_SIZE( segment_heap_performance_counter_information_t, 0x30 );                         
    };                                                   
};
#include "magic/segment_heap_performance_counter_information_t.end.hpp"
SDK_VERIFY( struct win::segment_heap_performance_counter_information_t, 0x30 );
