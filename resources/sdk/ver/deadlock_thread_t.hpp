#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kthread_t; }

#include "magic/deadlock_thread_t.start.hpp"
namespace ver
{
    struct deadlock_node_t;

    // [struct _VI_DEADLOCK_THREAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deadlock_thread_t                                     
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct nt::kthread_t*        thread;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 struct ver::deadlock_node_t* current_spin_node;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSpinNode
        _m02 struct ver::deadlock_node_t* current_other_node;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentOtherNode
        _m03 nt::list_entry_t             list_entry;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ListEntry
        _m04 nt::list_entry_t             free_list_entry;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeListEntry
        _m05 uint32_t                     node_count;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NodeCount
        _m06 volatile uint32_t            paging_count;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PagingCount
        _m07 uint8_t                      thread_uses_eresources;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ThreadUsesEresources
                                                                 
        SDK_MAGIC_PROPERTIES( "_VI_DEADLOCK_THREAD.$", 0x38, true, 0xb376d1ef7db7b838 );                       
        SDK_FIXED_SIZE( deadlock_thread_t, 0x38 );                       
    };                                                           
};
#include "magic/deadlock_thread_t.end.hpp"
SDK_VERIFY( struct ver::deadlock_thread_t, 0x38 );
