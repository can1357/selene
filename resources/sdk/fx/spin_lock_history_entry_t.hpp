#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/spin_lock_history_entry_t.start.hpp"
namespace fx
{
    // [struct FX_SPIN_LOCK_HISTORY_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spin_lock_history_entry_t  
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 void*   callers_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallersAddress
        _m01 int64_t acquired_at_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AcquiredAtTime
        _m02 int64_t locked_duraction;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LockedDuraction
                                      
        SDK_MAGIC_PROPERTIES( "FX_SPIN_LOCK_HISTORY_ENTRY.$", 0x18, true, 0x90d749ebe08c8b7b );                 
        SDK_FIXED_SIZE( spin_lock_history_entry_t, 0x18 );                 
    };                                
};
#include "magic/spin_lock_history_entry_t.end.hpp"
SDK_VERIFY( struct fx::spin_lock_history_entry_t, 0x18 );
