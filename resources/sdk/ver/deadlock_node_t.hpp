#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/deadlock_node_t.start.hpp"
namespace ver
{
    struct deadlock_node_t;
    struct deadlock_thread_t;
    struct deadlock_resource_t;

    // [struct _VI_DEADLOCK_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deadlock_node_t                                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m00 struct ver::deadlock_node_t*     parent;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Parent
        _m01 nt::list_entry_t                 children_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ChildrenList
        _m02 nt::list_entry_t                 siblings_list;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SiblingsList
        _m03 nt::list_entry_t                 resource_list;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ResourceList
        _m04 nt::list_entry_t                 free_list_entry;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeListEntry
        _m05 struct ver::deadlock_resource_t* root;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Root
        _m06 struct ver::deadlock_thread_t*   thread_entry;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ThreadEntry
        _m07 uint1_t                          active;                 //{ +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  } | .Active
        _m08 uint1_t                          only_try_acquire_used;  //{ +0x0048@1  +0x0048@1  +0x0048@1  +0x0048@1  } | .OnlyTryAcquireUsed
        _m09 uint1_t                          released_out_of_order;  //{ +0x0048@2  +0x0048@2  +0x0048@2  +0x0048@2  } | .ReleasedOutOfOrder
        _m10 uint29_t                         sequence_number;        //{ +0x0048@3  +0x0048@3  +0x0048@3  +0x0048@3  } | .SequenceNumber
        _m11 uint32_t                         whole;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Whole
        _m12 int32_t                          children_count;         //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ChildrenCount
        _m13 sdk::array<void*, 8>             stack_trace;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StackTrace
        _m14 sdk::array<void*, 8>             parent_stack_trace;     //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ParentStackTrace
                                                                    
        SDK_MAGIC_PROPERTIES( "_VI_DEADLOCK_NODE.$", 0xd0, true, 0x2e665d1fc9418c97 );                      
        SDK_FIXED_SIZE( deadlock_node_t, 0xd0 );                      
    };                                                              
};
#include "magic/deadlock_node_t.end.hpp"
SDK_VERIFY( struct ver::deadlock_node_t, 0xd0 );
