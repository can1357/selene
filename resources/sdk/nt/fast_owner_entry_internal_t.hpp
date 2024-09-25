#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fast_owner_entry_internal_t.start.hpp"
namespace nt
{
    // [struct _FAST_OWNER_ENTRY_INTERNAL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_owner_entry_internal_t              
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                          
        _m00 nt::list_entry_t list_entry;             //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint8_t          ab_lock_handle;         //{ +0x0010    +0x0010    +0x0010    } | .AbLockHandle
        _m02 uint1_t          disowned;               //{ +0x0011@0  +0x0011@0  +0x0011@0  } | .Disowned
        _m03 uint1_t          dynamically_allocated;  //{ +0x0011@1  +0x0011@1  +0x0011@1  } | .DynamicallyAllocated
        _m04 uint1_t          caller_exclusive;       //{ +0x0011@2  +0x0011@2  +0x0011@2  } | .CallerExclusive
        _m05 uint8_t          is_sublist_head;        //{ +0x0012    +0x0012    +0x0012    } | .IsSublistHead
        _m06 uint8_t          is_waiting;             //{ +0x0013    +0x0013    +0x0013    } | .IsWaiting
        _m07 void*            lock_address;           //{ +0x0018    +0x0018    +0x0018    } | .LockAddress
        _m08 void*            thread_address;         //{ +0x0020    +0x0020    +0x0020    } | .ThreadAddress
        _m09 nt::list_entry_t sublist_head;           //{ +0x0028    +0x0028    +0x0028    } | .SublistHead
        _m10 nt::list_entry_t lock_list_entry;        //{ +0x0038    +0x0038    +0x0038    } | .LockListEntry
                                                    
        SDK_MAGIC_PROPERTIES( "_FAST_OWNER_ENTRY_INTERNAL.$", 0x48, true, 0x3db169b58bb29ee3 );                      
        SDK_FIXED_SIZE( fast_owner_entry_internal_t, 0x48 );                      
    };                                              
};
#include "magic/fast_owner_entry_internal_t.end.hpp"
SDK_VERIFY( struct nt::fast_owner_entry_internal_t, 0x48 );
