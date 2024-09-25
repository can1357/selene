#pragma once
#include <sdkgen/support_library.hpp>
#include "../heap/entry_t.hpp"
#include "../heap/segment_t.hpp"
#include "../rtl/run_once_t.hpp"
#include "../heap/counters_t.hpp"
#include "../heap/tuning_parameters_t.hpp"
#include "../rtl/heap_memory_limit_data_t.hpp"

namespace heap { struct lock_t;             }
namespace heap { struct pseudo_tag_entry_t; }
namespace heap { struct tag_entry_t;        }

#include "magic/heap_t.start.hpp"
namespace nt
{
    struct heap_t;

    // [struct _HEAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_t                                                                     
    {                                                                                 
        using commit_routine_t = sdk::function<int32_t(void*, void**, uint64_t*)>*;                                   
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                            
        _m000 struct heap::segment_t               segment;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Segment
        _m001 struct heap::entry_t                 entry;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m002 uint32_t                             segment_signature;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SegmentSignature
        _m003 uint32_t                             segment_flags;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SegmentFlags
        _m004 nt::list_entry_t                     segment_list_entry;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SegmentListEntry
        _m005 struct nt::heap_t*                   heap;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Heap
        _m006 void*                                base_address;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BaseAddress
        _m007 uint32_t                             number_of_pages;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NumberOfPages
        _m008 struct heap::entry_t*                first_entry;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FirstEntry
        _m009 struct heap::entry_t*                last_valid_entry;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LastValidEntry
        _m010 uint32_t                             number_of_un_committed_pages;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NumberOfUnCommittedPages
        _m011 uint32_t                             number_of_un_committed_ranges;       //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .NumberOfUnCommittedRanges
        _m012 uint16_t                             segment_allocator_back_trace_index;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SegmentAllocatorBackTraceIndex
        _m013 nt::list_entry_t                     ucr_segment_list;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UCRSegmentList
        _m014 uint32_t                             flags;                               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Flags
        _m015 uint32_t                             force_flags;                         //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .ForceFlags
        _m016 uint32_t                             compatibility_flags;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CompatibilityFlags
        _m017 uint32_t                             encode_flag_mask;                    //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .EncodeFlagMask
        _m018 struct heap::entry_t                 encoding;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .Encoding
        _m019 uint32_t                             interceptor;                         //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Interceptor
        _m020 uint32_t                             virtual_memory_threshold;            //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .VirtualMemoryThreshold
        _m021 uint32_t                             signature;                           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Signature
        _m022 uint64_t                             segment_reserve;                     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .SegmentReserve
        _m023 uint64_t                             segment_commit;                      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SegmentCommit
        _m024 uint64_t                             de_commit_free_block_threshold;      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .DeCommitFreeBlockThreshold
        _m025 uint64_t                             de_commit_total_free_threshold;      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .DeCommitTotalFreeThreshold
        _m026 uint64_t                             total_free_size;                     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .TotalFreeSize
        _m027 uint64_t                             maximum_allocation_size;             //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .MaximumAllocationSize
        _m028 uint16_t                             process_heaps_list_index;            //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ProcessHeapsListIndex
        _m029 uint16_t                             header_validate_length;              //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .HeaderValidateLength
        _m030 void*                                header_validate_copy;                //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .HeaderValidateCopy
        _m031 uint16_t                             next_available_tag_index;            //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .NextAvailableTagIndex
        _m032 uint16_t                             maximum_tag_index;                   //{ +0x00e2    +0x00e2    +0x00e2    +0x00e2    } | .MaximumTagIndex
        _m033 struct heap::tag_entry_t*            tag_entries;                         //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .TagEntries
        _m034 nt::list_entry_t                     ucr_list;                            //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .UCRList
        _m035 uint64_t                             align_round;                         //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .AlignRound
        _m036 uint64_t                             align_mask;                          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .AlignMask
        _m037 nt::list_entry_t                     virtual_allocd_blocks;               //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .VirtualAllocdBlocks
        _m038 nt::list_entry_t                     segment_list;                        //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .SegmentList
        _m039 uint16_t                             allocator_back_trace_index;          //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .AllocatorBackTraceIndex
        _m040 uint32_t                             non_dedicated_list_length;           //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .NonDedicatedListLength
        _m041 void*                                blocks_index;                        //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .BlocksIndex
        _m042 void*                                ucr_index;                           //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .UCRIndex
        _m043 struct heap::pseudo_tag_entry_t*     pseudo_tag_entries;                  //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .PseudoTagEntries
        _m044 nt::list_entry_t                     free_lists;                          //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .FreeLists
        _m045 struct heap::lock_t*                 lock_variable;                       //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .LockVariable
        _m046 commit_routine_t                     commit_routine;                      //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .CommitRoutine
        _m047 union rtl::run_once_t                stack_trace_init_var;                //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .StackTraceInitVar
        _m048 void*                                front_end_heap;                      //{ +0x0178    +0x0198    +0x0198    +0x0198    } | .FrontEndHeap
        _m049 uint16_t                             front_heap_lock_count;               //{ +0x0180    +0x01a0    +0x01a0    +0x01a0    } | .FrontHeapLockCount
        _m050 uint8_t                              front_end_heap_type;                 //{ +0x0182    +0x01a2    +0x01a2    +0x01a2    } | .FrontEndHeapType
        _m051 uint8_t                              requested_front_end_heap_type;       //{ +0x0183    +0x01a3    +0x01a3    +0x01a3    } | .RequestedFrontEndHeapType
        _m052 uint16_t*                            front_end_heap_usage_data;           //{ +0x0188    +0x01a8    +0x01a8    +0x01a8    } | .FrontEndHeapUsageData
        _m053 uint16_t                             front_end_heap_maximum_index;        //{ +0x0190    +0x01b0    +0x01b0    +0x01b0    } | .FrontEndHeapMaximumIndex
        _m054 sdk::array<volatile uint8_t, 129>    front_end_heap_status_bitmap;        //{ +0x0192    +0x01b2    +0x01b2    +0x01b2    } | .FrontEndHeapStatusBitmap
        _m055 struct heap::counters_t              counters;                            //{ +0x0218    +0x0238    +0x0238    +0x0238    } | .Counters
        _m056 struct heap::tuning_parameters_t     tuning_parameters;                   //{ +0x0290    +0x02b0    +0x02b0    +0x02b0    } | .TuningParameters
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                            
        _m057 struct rtl::heap_memory_limit_data_t commit_limit_data;                   //{ +0x0178    +0x0178    +0x0178    } | .CommitLimitData
                                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP.$", 0x2c0, true, 0x7c970f803f4d56bd );                                   
        SDK_DYNAMIC_SIZE( heap_t );                                                   
    };                                                                                
};
#include "magic/heap_t.end.hpp"
