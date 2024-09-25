#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../rtl/srwlock_t.hpp"
#include "../rtl/run_once_t.hpp"
#include "../heap/vs_context_t.hpp"
#include "../heap/lfh_context_t.hpp"
#include "../heap/seg_context_t.hpp"
#include "../rtl/hp_env_handle_t.hpp"
#include "../heap/runtime_memory_stats_t.hpp"
#include "../rtl/heap_memory_limit_data_t.hpp"
#include "../rtl/hp_heap_va_callbacks_encoded_t.hpp"

#include "magic/segment_heap_t.start.hpp"
namespace ntdll
{
    // [struct _SEGMENT_HEAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_heap_t                                                           
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                          
        _m000 uint32_t                                      signature;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
        _m001 uint32_t                                      global_flags;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GlobalFlags
        _m002 uint32_t                                      interceptor;              //{ +0x0020    +0x0018    +0x0018    +0x0018    } | .Interceptor
        _m003 uint16_t                                      process_heap_list_index;  //{ +0x0024    +0x001c    +0x001c    +0x001c    } | .ProcessHeapListIndex
        _m004 sdk::variant<struct rtl::srwlock_t, uint64_t> large_metadata_lock;      //{ +0x0030    +0x0040    +0x0040    +0x0040    } | .LargeMetadataLock
        _m005 struct rtl::rb_tree_t                         large_alloc_metadata;     //{ +0x0038    +0x0048    +0x0048    +0x0048    } | .LargeAllocMetadata
        _m006 volatile uint64_t                             large_reserved_pages;     //{ +0x0048    +0x0058    +0x0058    +0x0058    } | .LargeReservedPages
        _m007 volatile uint64_t                             large_committed_pages;    //{ +0x0050    +0x0060    +0x0060    +0x0060    } | .LargeCommittedPages
        _m008 union rtl::run_once_t                         stack_trace_init_var;     //{ +0x0088    +0x0068    +0x0070    +0x0068    } | .StackTraceInitVar
        _m009 uint16_t                                      global_lock_count;        //{ +0x0026    +0x00d8    +0x00d8    +0x00d8    } | .GlobalLockCount
        _m010 uint32_t                                      global_lock_owner;        //{ +0x0028    +0x00dc    +0x00dc    +0x00dc    } | .GlobalLockOwner
        _m011 sdk::variant<struct rtl::srwlock_t, uint64_t> context_extend_lock;      //{ +0x0090    +0x00e0    +0x00e0    +0x00e0    } | .ContextExtendLock
        _m012 uint8_t*                                      allocated_base;           //{ +0x0098    +0x00e8    +0x00e8    +0x00e8    } | .AllocatedBase
        _m013 uint8_t*                                      uncommitted_base;         //{ +0x00a0    +0x00f0    +0x00f0    +0x00f0    } | .UncommittedBase
        _m014 uint8_t*                                      reserved_limit;           //{ +0x00a8    +0x00f8    +0x00f8    +0x00f8    } | .ReservedLimit
        _m015 struct heap::vs_context_t                     vs_context;               //{ +0x00b0    +0x0280    +0x02c0    +0x0280    } | .VsContext
        _m016 struct heap::lfh_context_t                    lfh_context;              //{ +0x0120    +0x0340    +0x0380    +0x0340    } | .LfhContext
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m017 struct rtl::hp_env_handle_t                   env_handle;               //{ +0x0000    +0x0000    +0x0000    } | .EnvHandle
        _m018 uint1_t                                       allocated_from_metadata;  //{ +0x001e@0  +0x001e@0  +0x001e@0  } | .AllocatedFromMetadata
        _m019 struct rtl::heap_memory_limit_data_t          commit_limit_data;        //{ +0x0020    +0x0020    +0x0020    } | .CommitLimitData
        _m020 uint64_t                                      reserved_must_be_zero1;   //{ +0x0020    +0x0020    +0x0020    } | .ReservedMustBeZero1
        _m021 void*                                         user_context;             //{ +0x0028    +0x0028    +0x0028    } | .UserContext
        _m022 uint64_t                                      reserved_must_be_zero2;   //{ +0x0030    +0x0030    +0x0030    } | .ReservedMustBeZero2
        _m023 struct heap::runtime_memory_stats_t           mem_stats;                //{ +0x0080    +0x0080    +0x0080    } | .MemStats
        _m024 sdk::array<struct heap::seg_context_t, 2>     seg_contexts;             //{ +0x0100    +0x0140    +0x0100    } | .SegContexts
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m025 volatile uint64_t                             total_reserved_pages;     //{ +0x0000    } | .TotalReservedPages
        _m026 volatile uint64_t                             total_committed_pages;    //{ +0x0008    } | .TotalCommittedPages
        _m027 uint64_t                                      free_committed_pages;     //{ +0x0018    } | .FreeCommittedPages
        _m028 struct rtl::srwlock_t                         segment_allocator_lock;   //{ +0x0058    } | .SegmentAllocatorLock
        _m029 nt::list_entry_t                              segment_list_head;        //{ +0x0060    } | .SegmentListHead
        _m030 uint64_t                                      segment_count;            //{ +0x0070    } | .SegmentCount
        _m031 struct rtl::rb_tree_t                         free_page_ranges;         //{ +0x0078    } | .FreePageRanges
                                                                                    
        // Windows 11                                                               
        //                                                                          
        _m032 uint64_t                                      tag;                      //{ +0x0068    } | .Tag
        _m033 uint8_t*                                      reserved_region_end;      //{ +0x0100    } | .ReservedRegionEnd
        _m034 struct rtl::hp_heap_va_callbacks_encoded_t    callbacks_encoded;        //{ +0x0108    } | .CallbacksEncoded
                                                                                    
        SDK_MAGIC_PROPERTIES( "_SEGMENT_HEAP.$", 0x800, true, 0xd5bc70af2db083d3 );                        
        SDK_DYNAMIC_SIZE( segment_heap_t );                                         
    };                                                                              
};
#include "magic/segment_heap_t.end.hpp"
