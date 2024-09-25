#pragma once
#include <sdkgen/support_library.hpp>
#include "kspin_lock_queue_t.hpp"

#include "magic/klock_queue_handle_t.start.hpp"
namespace nt
{
    // [struct _KLOCK_QUEUE_HANDLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct klock_queue_handle_t                       
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 struct nt::kspin_lock_queue_t lock_queue;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LockQueue
        _m01 uint8_t                       old_irql;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OldIrql
                                                      
        SDK_NONVOL_PROPERTIES( "_KLOCK_QUEUE_HANDLE.$", 0x18, true, 0x3b6e4c4cc59d123b );           
        SDK_FIXED_SIZE( klock_queue_handle_t, 0x18 );           
    };                                                
};
#include "magic/klock_queue_handle_t.end.hpp"
SDK_VERIFY( struct nt::klock_queue_handle_t, 0x18 );
