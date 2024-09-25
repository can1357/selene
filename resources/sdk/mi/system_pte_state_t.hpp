#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "system_pte_type_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "ultra_va_context_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "huge_system_view_head_t.hpp"
#include "queued_deadstack_workitem_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"

namespace nt { struct mmpfn_t; }
namespace nt { struct mmpte_t; }

#include "magic/system_pte_state_t.start.hpp"
namespace mi
{
    struct cached_ptes_t;
    struct ultra_mdl_node_t;

    // [struct _MI_SYSTEM_PTE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pte_state_t                                                         
    {                                                                                 
        using kernel_stack_pte_info_t = sdk::variant<struct mi::system_pte_type_t, sdk::array<struct mi::system_pte_type_t, 2>>;                                 
        using system_view_buckets_t =   sdk::array<struct mi::huge_system_view_head_t, 256>;                                 
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                            
        _m000 struct nt::npaged_lookaside_list_t     mdl_tracker_lookaside;             //{ +0x0040    +0x0000    +0x0000    +0x0000    } | .MdlTrackerLookaside
        _m001 union nt::slist_header_t               dead_pte_tracker_s_list_head;      //{ +0x0000    +0x0080    +0x0080    +0x0080    } | .DeadPteTrackerSListHead
        _m002 uint64_t                               pte_tracker_lock;                  //{ +0x0010    +0x0090    +0x0090    +0x0090    } | .PteTrackerLock
        _m003 struct rtl::bitmap_ex_t                pte_tracking_bitmap;               //{ +0x00c0    +0x0098    +0x0098    +0x0098    } | .PteTrackingBitmap
        _m004 volatile struct mi::cached_ptes_t*     cached_pte_heads;                  //{ +0x00d0    +0x00a8    +0x00a8    +0x00a8    } | .CachedPteHeads
        _m005 struct mi::system_pte_type_t           system_view_pte_info;              //{ +0x00d8    +0x00b8    +0x00b0    +0x00b8    } | .SystemViewPteInfo
        _m006 uint32_t                               stack_growth_failures;             //{ +0x0160    +0x0178    +0x01b8    +0x0178    } | .StackGrowthFailures
        _m007 uint8_t                                kernel_stack_pages;                //{ +0x0140    +0x017c    +0x01bc    +0x017c    } | .KernelStackPages
        _m008 uint8_t                                track_ptes_aborted;                //{ +0x0164    +0x017d    +0x01bd    +0x017d    } | .TrackPtesAborted
        _m009 uint8_t                                adjust_counter;                    //{ +0x0165    +0x017e    +0x01be    +0x017e    } | .AdjustCounter
        _m010 volatile int32_t                       reserved_mapping_lock;             //{ +0x0168    +0x0180    +0x01c0    +0x0180    } | .ReservedMappingLock
        _m011 struct rtl::avl_tree_t                 reserved_mapping_tree;             //{ +0x0170    +0x0188    +0x01c8    +0x0188    } | .ReservedMappingTree
        _m012 struct nt::mmpfn_t*                    reserved_mapping_page_table_pfns;  //{ +0x0178    +0x0190    +0x01d0    +0x0190    } | .ReservedMappingPageTablePfns
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                            
        _m013 kernel_stack_pte_info_t                kernel_stack_pte_info;             //{ +0x0118    +0x0108    +0x0118    } | .KernelStackPteInfo
        _m014 struct rtl::avl_tree_t                 outswapped_kernel_stack_root;      //{ +0x0198    +0x01d8    +0x0198    } | .OutswappedKernelStackRoot
        _m015 volatile int32_t                       outswapped_kernel_stack_lock;      //{ +0x01a0    +0x01e0    +0x01a0    } | .OutswappedKernelStackLock
        _m016 struct nt::mmpte_t*                    break_make_pte;                    //{ +0x01a8    +0x01e8    +0x01a8    } | .BreakMakePte
        _m017 struct mi::ultra_va_context_t          ultra_space_context;               //{ +0x01b0    +0x01f0    +0x01b0    } | .UltraSpaceContext
        _m018 uint32_t                               number_of_ultra_mdl_maps;          //{ +0x01f0    +0x0230    +0x01f0    } | .NumberOfUltraMdlMaps
        _m019 struct mi::ultra_mdl_node_t*           ultra_mdl_node_mappings;           //{ +0x01f8    +0x0238    +0x01f8    } | .UltraMdlNodeMappings
                                                                                      
        // Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                            
        _m020 volatile struct mi::cached_ptes_t*     cached_kernel_stack_pte_heads;     //{ +0x00b0    +0x00b0    } | .CachedKernelStackPteHeads
                                                                                      
        // Windows 10 v1607                                                           
        //                                                                            
        _m021 union nt::slist_header_t               queued_stacks;                     //{ +0x0150    } | .QueuedStacks
        _m022 struct mi::queued_deadstack_workitem_t queued_stacks_work_item;           //{ +0x0180    } | .QueuedStacksWorkItem
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m023 struct ex::push_lock_t                 system_space_view_lock;            //{ +0x0240    } | .SystemSpaceViewLock
        _m024 struct rtl::avl_tree_t                 view_root;                         //{ +0x0248    } | .ViewRoot
        _m025 uint32_t                               view_count;                        //{ +0x0250    } | .ViewCount
        _m026 uint8_t                                code_page_edited;                  //{ +0x0254    } | .CodePageEdited
        _m027 system_view_buckets_t                  system_view_buckets;               //{ +0x0258    } | .SystemViewBuckets
                                                                                      
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_PTE_STATE.$", 0x200, true, 0x42c7ce06e0ed290 );                                 
        SDK_DYNAMIC_SIZE( system_pte_state_t );                                       
    };                                                                                
};
#include "magic/system_pte_state_t.end.hpp"
