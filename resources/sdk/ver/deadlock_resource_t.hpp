#pragma once
#include <sdkgen/support_library.hpp>
#include "deadlock_resource_type_t.hpp"

#include "magic/deadlock_resource_t.start.hpp"
namespace ver
{
    struct deadlock_thread_t;

    // [struct _VI_DEADLOCK_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deadlock_resource_t                                     
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 enum ver::deadlock_resource_type_t type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                           node_count;          //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .NodeCount
        _m02 uint16_t                           recursion_count;     //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .RecursionCount
        _m03 void*                              resource_address;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceAddress
        _m04 struct ver::deadlock_thread_t*     thread_owner;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThreadOwner
        _m05 nt::list_entry_t                   resource_list;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceList
        _m06 nt::list_entry_t                   hash_chain_list;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HashChainList
        _m07 nt::list_entry_t                   free_list_entry;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeListEntry
        _m08 sdk::array<void*, 8>               stack_trace;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .StackTrace
        _m09 sdk::array<void*, 8>               last_acquire_trace;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LastAcquireTrace
        _m10 sdk::array<void*, 8>               last_release_trace;  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .LastReleaseTrace
                                                                   
        SDK_MAGIC_PROPERTIES( "_VI_DEADLOCK_RESOURCE.$", 0xf8, true, 0x2a7bc7afcbcd12a0 );                   
        SDK_FIXED_SIZE( deadlock_resource_t, 0xf8 );                   
    };                                                             
};
#include "magic/deadlock_resource_t.end.hpp"
SDK_VERIFY( struct ver::deadlock_resource_t, 0xf8 );
