#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/klock_entry_lock_state_t.start.hpp"
namespace nt
{
    // [struct _KLOCK_ENTRY_LOCK_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct klock_entry_lock_state_t           
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint1_t  cross_thread_releasable;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CrossThreadReleasable
        _m01 uint1_t  busy;                     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Busy
        _m02 uint1_t  in_tree;                  //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .InTree
        _m03 void*    lock_state;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockState
        _m04 void*    session_state;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionState
        _m05 uint32_t session_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
        _m06 uint32_t session_pad;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SessionPad
                                              
        SDK_MAGIC_PROPERTIES( "_KLOCK_ENTRY_LOCK_STATE.$", 0x10, true, 0x348a8e1a9b13fd71 );                        
        SDK_FIXED_SIZE( klock_entry_lock_state_t, 0x10 );                        
    };                                        
};
#include "magic/klock_entry_lock_state_t.end.hpp"
SDK_VERIFY( struct nt::klock_entry_lock_state_t, 0x10 );
