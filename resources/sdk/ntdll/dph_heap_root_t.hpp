#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_table_t.hpp"

namespace rtl { struct critical_section_t; }
namespace rtl { struct trace_block_t;      }

#include "magic/dph_heap_root_t.start.hpp"
namespace ntdll
{
    struct dph_heap_block_t;

    // [struct _DPH_HEAP_ROOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dph_heap_root_t                                                           
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                           
        _m000 uint32_t                        signature;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 uint32_t                        heap_flags;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HeapFlags
        _m002 struct rtl::critical_section_t* heap_crit_sect;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeapCritSect
        _m003 uint32_t                        n_remote_lock_acquired;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .nRemoteLockAcquired
        _m004 struct ntdll::dph_heap_block_t* p_virtual_storage_list_head;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pVirtualStorageListHead
        _m005 struct ntdll::dph_heap_block_t* p_virtual_storage_list_tail;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pVirtualStorageListTail
        _m006 uint32_t                        n_virtual_storage_ranges;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .nVirtualStorageRanges
        _m007 uint64_t                        n_virtual_storage_bytes;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .nVirtualStorageBytes
        _m008 struct rtl::avl_table_t         busy_nodes_table;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BusyNodesTable
        _m009 struct ntdll::dph_heap_block_t* node_to_allocate;                        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .NodeToAllocate
        _m010 uint32_t                        n_busy_allocations;                      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .nBusyAllocations
        _m011 uint64_t                        n_busy_allocation_bytes_committed;       //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .nBusyAllocationBytesCommitted
        _m012 struct ntdll::dph_heap_block_t* p_free_allocation_list_head;             //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .pFreeAllocationListHead
        _m013 struct ntdll::dph_heap_block_t* p_free_allocation_list_tail;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .pFreeAllocationListTail
        _m014 uint32_t                        n_free_allocations;                      //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .nFreeAllocations
        _m015 uint64_t                        n_free_allocation_bytes_committed;       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .nFreeAllocationBytesCommitted
        _m016 nt::list_entry_t                available_allocation_head;               //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .AvailableAllocationHead
        _m017 uint32_t                        n_available_allocations;                 //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .nAvailableAllocations
        _m018 uint64_t                        n_available_allocation_bytes_committed;  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .nAvailableAllocationBytesCommitted
        _m019 struct ntdll::dph_heap_block_t* p_unused_node_list_head;                 //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .pUnusedNodeListHead
        _m020 struct ntdll::dph_heap_block_t* p_unused_node_list_tail;                 //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .pUnusedNodeListTail
        _m021 uint32_t                        n_unused_nodes;                          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .nUnusedNodes
        _m022 uint64_t                        n_busy_allocation_bytes_accessible;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .nBusyAllocationBytesAccessible
        _m023 struct ntdll::dph_heap_block_t* p_node_pool_list_head;                   //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .pNodePoolListHead
        _m024 struct ntdll::dph_heap_block_t* p_node_pool_list_tail;                   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .pNodePoolListTail
        _m025 uint32_t                        n_node_pools;                            //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .nNodePools
        _m026 uint64_t                        n_node_pool_bytes;                       //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .nNodePoolBytes
        _m027 nt::list_entry_t                next_heap;                               //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .NextHeap
        _m028 uint32_t                        extra_flags;                             //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ExtraFlags
        _m029 uint32_t                        seed;                                    //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .Seed
        _m030 void*                           normal_heap;                             //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .NormalHeap
        _m031 struct rtl::trace_block_t*      create_stack_trace;                      //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .CreateStackTrace
        _m032 void*                           first_thread;                            //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .FirstThread
                                                                                     
        SDK_MAGIC_PROPERTIES( "_DPH_HEAP_ROOT.$", 0x168, true, 0x655b2dc2f09bb122 );                                       
        SDK_FIXED_SIZE( dph_heap_root_t, 0x168 );                                       
    };                                                                               
};
#include "magic/dph_heap_root_t.end.hpp"
SDK_VERIFY( struct ntdll::dph_heap_root_t, 0x168 );
