#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mmpfn_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/pagelist_state_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGELIST_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pagelist_state_t                                                            
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                             
        _m00 volatile int32_t             active_spin_lock;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveSpinLock
        _m01 struct rtl::avl_tree_t       active_thread_tree;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActiveThreadTree
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                             
        _m02 volatile int32_t             active_zero_spin_lock;                         //{ +0x0010    +0x0010    +0x0010    } | .ActiveZeroSpinLock
        _m03 struct rtl::avl_tree_t       active_zero_thread_tree;                       //{ +0x0018    +0x0018    +0x0018    } | .ActiveZeroThreadTree
        _m04 struct nt::mmpfn_t           large_pfn_template;                            //{ +0x0020    +0x0020    +0x0020    } | .LargePfnTemplate
        _m05 struct nt::mmpfn_t           large_pfn_base_page_template;                  //{ +0x0050    +0x0050    +0x0050    } | .LargePfnBasePageTemplate
        _m06 uint32_t                     number_of_large_page_list_heads;               //{ +0x0080    +0x0080    +0x0080    } | .NumberOfLargePageListHeads
                                                                                       
        // Windows 11                                                                  
        //                                                                             
        _m07 struct nt::kevent_t          phase1_boot_complete;                          //{ +0x0088    } | .Phase1BootComplete
        _m08 struct rtl::avl_tree_t       pending_bad_page_tree;                         //{ +0x00a0    } | .PendingBadPageTree
        _m09 uint64_t                     pending_bad_page_count;                        //{ +0x00a8    } | .PendingBadPageCount
        _m10 volatile int32_t             pending_bad_page_tree_lock;                    //{ +0x00b0    } | .PendingBadPageTreeLock
        _m11 uint64_t                     pending_bad_pages_without_nodes_count;         //{ +0x00b8    } | .PendingBadPagesWithoutNodesCount
        _m12 nt::list_entry_t             pending_bad_page_nodes_awaiting_delete_list;   //{ +0x00c0    } | .PendingBadPageNodesAwaitingDeleteList
        _m13 uint64_t                     pending_bad_page_nodes_awaiting_delete_count;  //{ +0x00d0    } | .PendingBadPageNodesAwaitingDeleteCount
        _m14 uint8_t                      pending_bad_page_node_delete_active;           //{ +0x00d8    } | .PendingBadPageNodeDeleteActive
        _m15 struct nt::work_queue_item_t pending_bad_page_node_delete_work_item;        //{ +0x00e0    } | .PendingBadPageNodeDeleteWorkItem
        _m16 struct rtl::avl_tree_t       bad_huge_page_tree;                            //{ +0x0100    } | .BadHugePageTree
        _m17 uint64_t                     bad_huge_page_count;                           //{ +0x0108    } | .BadHugePageCount
                                                                                       
        SDK_MAGIC_PROPERTIES( "_MI_PAGELIST_STATE.$", 0x88, true, 0xe41a5d2e36da2c9f );                                             
        SDK_DYNAMIC_SIZE( pagelist_state_t );                                             
    };                                                                                 
};
#include "magic/pagelist_state_t.end.hpp"
