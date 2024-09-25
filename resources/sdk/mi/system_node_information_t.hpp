#pragma once
#include <sdkgen/support_library.hpp>
#include "dynamic_bitmap_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "write_calibration_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "deferred_pfns_to_free_t.hpp"
#include "node_number_zero_based_t.hpp"
#include "../nt/cached_kstack_list_t.hpp"

namespace nt { struct mmpfn_t; }

#include "magic/system_node_information_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_NODE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_node_information_t                                                             
    {                                                                                            
        using write_calibration_t =     sdk::array<sdk::array<struct mi::write_calibration_t, 3>, 3>;                                    
        using deferred_pfns_to_free_t = sdk::array<struct mi::deferred_pfns_to_free_t, 4>;                                    
                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                    
        //                                                                                       
        _m000 sdk::array<struct nt::cached_kstack_list_t, 2> cached_kernel_stacks;                 //{ +0x0070    +0x0000    +0x0000    } | .CachedKernelStacks
        _m001 struct mi::dynamic_bitmap_t                    dynamic_bit_map_non_paged_pool;       //{ +0x00b8    +0x0040    +0x0040    } | .DynamicBitMapNonPagedPool
        _m002 uint64_t                                       cached_non_paged_pool_count;          //{ +0x0130    +0x0088    +0x0088    } | .CachedNonPagedPoolCount
        _m003 uint64_t                                       non_paged_pool_spin_lock;             //{ +0x0138    +0x0090    +0x0090    } | .NonPagedPoolSpinLock
        _m004 struct nt::mmpfn_t*                            cached_non_paged_pool;                //{ +0x0140    +0x0098    +0x0098    } | .CachedNonPagedPool
        _m005 void*                                          non_paged_pool_first_va;              //{ +0x0148    +0x00a0    +0x00a0    } | .NonPagedPoolFirstVa
        _m006 void*                                          non_paged_pool_last_va;               //{ +0x0150    +0x00a8    +0x00a8    } | .NonPagedPoolLastVa
                                                                                                 
        // Windows 10 v1607                                                                      
        //                                                                                       
        _m007 union nt::slist_header_t                       paged_pool_s_list_head;               //{ +0x0000    } | .PagedPoolSListHead
        _m008 sdk::array<union nt::slist_header_t, 3>        non_paged_pool_s_list_head;           //{ +0x0010    } | .NonPagedPoolSListHead
        _m009 sdk::array<union nt::slist_header_t, 3>        non_paged_pool_s_list_head_nx;        //{ +0x0040    } | .NonPagedPoolSListHeadNx
        _m010 uint64_t                                       non_paged_bit_map_maximum;            //{ +0x00b0    } | .NonPagedBitMapMaximum
        _m011 uint64_t                                       non_paged_pool_lowest_page;           //{ +0x0108    } | .NonPagedPoolLowestPage
        _m012 uint64_t                                       non_paged_pool_highest_page;          //{ +0x0110    } | .NonPagedPoolHighestPage
        _m013 uint64_t                                       allocated_non_paged_pool;             //{ +0x0118    } | .AllocatedNonPagedPool
        _m014 uint64_t                                       partial_large_pool_regions;           //{ +0x0120    } | .PartialLargePoolRegions
        _m015 uint64_t                                       pages_in_partial_large_pool_regions;  //{ +0x0128    } | .PagesInPartialLargePoolRegions
        _m016 sdk::array<struct rtl::bitmap_ex_t, 3>         non_paged_bit_map;                    //{ +0x0158    } | .NonPagedBitMap
        _m017 sdk::array<uint64_t, 2>                        non_paged_hint;                       //{ +0x0188    } | .NonPagedHint
                                                                                                 
        // Windows 11                                                                            
        //                                                                                       
        _m018 struct nt::group_affinity_t*                   group_affinity;                       //{ +0x0000    } | .GroupAffinity
        _m019 uint16_t                                       group_affinity_count;                 //{ +0x0008    } | .GroupAffinityCount
        _m020 sdk::array<uint16_t, 3>                        processor_count;                      //{ +0x000a    } | .ProcessorCount
        _m021 sdk::array<uint16_t, 3>                        usable_processor_count;               //{ +0x0010    } | .UsableProcessorCount
        _m022 struct mi::node_number_zero_based_t            processor_node;                       //{ +0x0018    } | .ProcessorNode
        _m023 struct nt::group_affinity_t                    forward_progress_group_affinity;      //{ +0x0020    } | .ForwardProgressGroupAffinity
        _m024 volatile int32_t                               large_page_list_op_lock;              //{ +0x0030    } | .LargePageListOpLock
        _m025 write_calibration_t                            write_calibration;                    //{ +0x0038    } | .WriteCalibration
        _m026 volatile int32_t                               io_pfn_lock;                          //{ +0x0180    } | .IoPfnLock
        _m027 deferred_pfns_to_free_t                        deferred_pfns_to_free;                //{ +0x0188    } | .DeferredPfnsToFree
        _m028 struct mi::deferred_pfns_to_free_t             deferred_pfns_ready;                  //{ +0x0208    } | .DeferredPfnsReady
        _m029 volatile int32_t                               deferred_pfns_to_free_lock;           //{ +0x0228    } | .DeferredPfnsToFreeLock
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_NODE_INFORMATION.$", 0xb0, true, 0xa0a748d9caf6f328 );                                    
        SDK_DYNAMIC_SIZE( system_node_information_t );                                           
    };                                                                                           
};
#include "magic/system_node_information_t.end.hpp"
