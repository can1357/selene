#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/counters_t.start.hpp"
namespace heap
{
    // [struct _HEAP_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct counters_t                              
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint64_t total_memory_reserved;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalMemoryReserved
        _m01 uint64_t total_memory_committed;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalMemoryCommitted
        _m02 uint64_t total_memory_large_ucr;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalMemoryLargeUCR
        _m03 uint64_t total_size_in_virtual_blocks;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalSizeInVirtualBlocks
        _m04 uint32_t total_segments;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalSegments
        _m05 uint32_t total_uc_rs;                   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TotalUCRs
        _m06 uint32_t committ_ops;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CommittOps
        _m07 uint32_t de_commit_ops;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .DeCommitOps
        _m08 uint32_t lock_acquires;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LockAcquires
        _m09 uint32_t lock_collisions;               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LockCollisions
        _m10 uint32_t commit_rate;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CommitRate
        _m11 uint32_t decommitt_rate;                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DecommittRate
        _m12 uint32_t commit_failures;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CommitFailures
        _m13 uint32_t in_block_commit_failures;      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .InBlockCommitFailures
        _m14 uint32_t poll_interval_counter;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PollIntervalCounter
        _m15 uint32_t decommits_since_last_check;    //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .DecommitsSinceLastCheck
        _m16 uint32_t heap_poll_interval;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .HeapPollInterval
        _m17 uint32_t alloc_and_free_ops;            //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .AllocAndFreeOps
        _m18 uint32_t allocation_indices_active;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AllocationIndicesActive
        _m19 uint32_t in_block_deccommits;           //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .InBlockDeccommits
        _m20 uint64_t in_block_deccomit_size;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .InBlockDeccomitSize
        _m21 uint64_t high_watermark_size;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .HighWatermarkSize
        _m22 uint64_t last_polled_size;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LastPolledSize
                                                   
        SDK_MAGIC_PROPERTIES( "_HEAP_COUNTERS.$", 0x78, true, 0x86231bc82886e6e5 );                             
        SDK_FIXED_SIZE( counters_t, 0x78 );                             
    };                                             
};
#include "magic/counters_t.end.hpp"
SDK_VERIFY( struct heap::counters_t, 0x78 );
