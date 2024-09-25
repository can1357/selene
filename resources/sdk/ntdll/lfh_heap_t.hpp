#pragma once
#include <sdkgen/support_library.hpp>
#include "../heap/bucket_t.hpp"
#include "../rtl/srwlock_t.hpp"
#include "../heap/local_data_t.hpp"
#include "../heap/bucket_run_info_t.hpp"
#include "user_memory_cache_entry_t.hpp"
#include "../heap/lfh_mem_policies_t.hpp"

namespace heap { struct local_segment_info_t; }

#include "magic/lfh_heap_t.start.hpp"
namespace ntdll
{
    struct segment_heap_t;

    // [struct _LFH_HEAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_heap_t                                                                 
    {                                                                                 
        using user_block_cache_t =        sdk::array<struct ntdll::user_memory_cache_entry_t, 12>;                                
        using segment_info_arrays_t =     sdk::array<struct heap::local_segment_info_t*, 129>;                                
        using affinitized_info_arrays_t = sdk::array<struct heap::local_segment_info_t*, 129>;                                
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                            
        _m00 struct rtl::srwlock_t                    lock;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t                         sub_segment_zones;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubSegmentZones
        _m02 void*                                    heap;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Heap
        _m03 void*                                    next_segment_info_array_address;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextSegmentInfoArrayAddress
        _m04 void*                                    first_uncommitted_address;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FirstUncommittedAddress
        _m05 void*                                    reserved_address_limit;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReservedAddressLimit
        _m06 uint32_t                                 segment_create;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SegmentCreate
        _m07 uint32_t                                 segment_delete;                   //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SegmentDelete
        _m08 volatile uint32_t                        minimum_cache_depth;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MinimumCacheDepth
        _m09 volatile uint32_t                        cache_shift_threshold;            //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .CacheShiftThreshold
        _m10 volatile uint64_t                        size_in_cache;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SizeInCache
        _m11 volatile union heap::bucket_run_info_t   run_info;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RunInfo
        _m12 user_block_cache_t                       user_block_cache;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UserBlockCache
        _m13 struct heap::lfh_mem_policies_t          memory_policies;                  //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | .MemoryPolicies
        _m14 sdk::array<struct heap::bucket_t, 129>   buckets;                          //{ +0x02a4    +0x02a4    +0x02a4    +0x02a4    } | .Buckets
        _m15 segment_info_arrays_t                    segment_info_arrays;              //{ +0x04a8    +0x04a8    +0x04a8    +0x04a8    } | .SegmentInfoArrays
        _m16 affinitized_info_arrays_t                affinitized_info_arrays;          //{ +0x08b0    +0x08b0    +0x08b0    +0x08b0    } | .AffinitizedInfoArrays
        _m17 struct ntdll::segment_heap_t*            segment_allocator;                //{ +0x0cb8    +0x0cb8    +0x0cb8    +0x0cb8    } | .SegmentAllocator
        _m18 sdk::array<struct heap::local_data_t, 1> local_data;                       //{ +0x0cc0    +0x0cc0    +0x0cc0    +0x0cc0    } | .LocalData
                                                                                      
        SDK_MAGIC_PROPERTIES( "_LFH_HEAP.$", 0xcf0, true, 0xecb77c977da18a44 );                                
        SDK_FIXED_SIZE( lfh_heap_t, 0xcf0 );                                          
    };                                                                                
};
#include "magic/lfh_heap_t.end.hpp"
SDK_VERIFY( struct ntdll::lfh_heap_t, 0xcf0 );
