#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"
#include "../rtl/std_list_head_t.hpp"
#include "../rtl/stack_database_lock_t.hpp"

namespace rtl { struct stack_trace_entry_t; }

#include "magic/stack_trace_database_t.start.hpp"
namespace ntdll
{
    // [struct _STACK_TRACE_DATABASE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_database_t                                                       
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                              
        _m00 struct rtl::stack_database_lock_t          lock;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint64_t                                   peak_hash_collision_list_length;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PeakHashCollisionListLength
        _m02 void*                                      lower_memory_start;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LowerMemoryStart
        _m03 uint8_t                                    pre_committed;                    //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PreCommitted
        _m04 uint8_t                                    dump_in_progress;                 //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .DumpInProgress
        _m05 void*                                      commit_base;                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .CommitBase
        _m06 void*                                      current_lower_commit_limit;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CurrentLowerCommitLimit
        _m07 void*                                      current_upper_commit_limit;       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .CurrentUpperCommitLimit
        _m08 char*                                      next_free_lower_memory;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .NextFreeLowerMemory
        _m09 char*                                      next_free_upper_memory;           //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .NextFreeUpperMemory
        _m10 uint32_t                                   number_of_entries_looked_up;      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .NumberOfEntriesLookedUp
        _m11 uint32_t                                   number_of_entries_added;          //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .NumberOfEntriesAdded
        _m12 struct rtl::stack_trace_entry_t**          entry_index_array;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .EntryIndexArray
        _m13 uint32_t                                   number_of_entries_allocated;      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .NumberOfEntriesAllocated
        _m14 uint32_t                                   number_of_entries_available;      //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .NumberOfEntriesAvailable
        _m15 uint32_t                                   number_of_allocation_failures;    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .NumberOfAllocationFailures
        _m16 sdk::array<union nt::slist_header_t, 32>   free_lists;                       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .FreeLists
        _m17 uint32_t                                   number_of_buckets;                //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .NumberOfBuckets
        _m18 sdk::array<struct rtl::std_list_head_t, 1> buckets;                          //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .Buckets
                                                                                        
        SDK_MAGIC_PROPERTIES( "_STACK_TRACE_DATABASE.$", 0x2f0, true, 0xdb063a94da46515 );                                
        SDK_FIXED_SIZE( stack_trace_database_t, 0x2f0 );                                
    };                                                                                  
};
#include "magic/stack_trace_database_t.end.hpp"
SDK_VERIFY( struct ntdll::stack_trace_database_t, 0x2f0 );
