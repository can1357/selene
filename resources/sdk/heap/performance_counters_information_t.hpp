#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/segment_heap_performance_counter_information_t.hpp"

#include "magic/performance_counters_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_PERFORMANCE_COUNTERS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct performance_counters_information_t                                              
    {                                                                                      
        using segment_heap_performance_counter_information_t = struct win::segment_heap_performance_counter_information_t;                              
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                 
        _m00 uint32_t                                        size;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                                        version;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                                        heap_index;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeapIndex
        _m03 uint32_t                                        last_heap_index;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LastHeapIndex
        _m04 uint64_t                                        base_address;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BaseAddress
        _m05 uint64_t                                        reserve_size;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReserveSize
        _m06 uint64_t                                        commit_size;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CommitSize
        _m07 uint32_t                                        segment_count;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SegmentCount
        _m08 uint64_t                                        large_ucr_memory;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LargeUCRMemory
        _m09 uint32_t                                        ucr_length;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UCRLength
        _m10 uint64_t                                        allocated_space;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AllocatedSpace
        _m11 uint64_t                                        free_space;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FreeSpace
        _m12 uint32_t                                        free_list_length;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FreeListLength
        _m13 uint32_t                                        contention;                     //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Contention
        _m14 uint32_t                                        virtual_blocks;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .VirtualBlocks
        _m15 uint32_t                                        commit_rate;                    //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .CommitRate
        _m16 uint32_t                                        decommit_rate;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DecommitRate
        _m17 segment_heap_performance_counter_information_t  segment_heap_perf_information;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SegmentHeapPerfInformation
                                                                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.$", 0x98, true, 0x4283aee7338606f7 );                              
        SDK_FIXED_SIZE( performance_counters_information_t, 0x98 );                              
    };                                                                                     
};
#include "magic/performance_counters_information_t.end.hpp"
SDK_VERIFY( struct heap::performance_counters_information_t, 0x98 );
