#pragma once
#include <sdkgen/support_library.hpp>
#include "spin_lock_history_entry_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/spin_lock_history_t.start.hpp"
namespace fx
{
    // [struct FX_SPIN_LOCK_HISTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spin_lock_history_t                                     
    {                                                              
        using history_t = sdk::array<struct fx::spin_lock_history_entry_t, 10>;                
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                         
        _m00 struct nt::kthread_t*                 owning_thread;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OwningThread
        _m01 struct fx::spin_lock_history_entry_t* current_history;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentHistory
        _m02 history_t                             history;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .History
                                                                   
        SDK_MAGIC_PROPERTIES( "FX_SPIN_LOCK_HISTORY.$", 0x100, true, 0x8c63378b7da0b19 );                
        SDK_FIXED_SIZE( spin_lock_history_t, 0x100 );                
    };                                                             
};
#include "magic/spin_lock_history_t.end.hpp"
SDK_VERIFY( struct fx::spin_lock_history_t, 0x100 );
