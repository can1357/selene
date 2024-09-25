#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kclock_timer_deadline_entry_t.start.hpp"
namespace nt
{
    // [struct _KCLOCK_TIMER_DEADLINE_ENTRY]
    // => Windows 11
    //
    struct kclock_timer_deadline_entry_t
    {                                   
        // Windows 11                 
        //                            
        _m00 uint64_t due_time;           //{ +0x0000    } | .DueTime
        _m01 uint32_t tolerable_delay;    //{ +0x0008    } | .TolerableDelay
        _m02 uint8_t  type_flags;         //{ +0x000c    } | .TypeFlags
        _m03 uint1_t  valid;              //{ +0x000c@0  } | .Valid
        _m04 uint1_t  no_wake;            //{ +0x000c@1  } | .NoWake
                                        
        SDK_MAGIC_PROPERTIES( "_KCLOCK_TIMER_DEADLINE_ENTRY.$", 0x0, false, 0x1fe611278b49059f );                
        SDK_FIXED_SIZE( kclock_timer_deadline_entry_t, 0x10 );                
    };                                  
};
#include "magic/kclock_timer_deadline_entry_t.end.hpp"
SDK_VERIFY( struct nt::kclock_timer_deadline_entry_t, 0x10 );
