#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/spinlock_t.start.hpp"
namespace wmi
{
    // [struct _WMI_SPINLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spinlock_t                     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    spin_lock_address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLockAddress
        _m01 void*    caller_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallerAddress
        _m02 uint64_t acquire_time;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AcquireTime
        _m03 uint64_t release_time;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReleaseTime
        _m04 uint32_t wait_time_in_cycles;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WaitTimeInCycles
        _m05 uint32_t spin_count;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SpinCount
        _m06 uint32_t thread_id;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ThreadId
        _m07 uint32_t interrupt_count;      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .InterruptCount
        _m08 uint8_t  irql;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Irql
        _m09 uint8_t  acquire_depth;        //{ +0x0031    +0x0031    +0x0031    +0x0031    } | .AcquireDepth
        _m10 uint6_t  acquire_mode;         //{ +0x0032@0  +0x0032@0  +0x0032@0  +0x0032@0  } | .AcquireMode
        _m11 uint1_t  execute_dpc;          //{ +0x0032@6  +0x0032@6  +0x0032@6  +0x0032@6  } | .ExecuteDpc
        _m12 uint1_t  execute_isr;          //{ +0x0032@7  +0x0032@7  +0x0032@7  +0x0032@7  } | .ExecuteIsr
        _m13 uint8_t  flags;                //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .Flags
                                          
        SDK_MAGIC_PROPERTIES( "_WMI_SPINLOCK.$", 0x38, true, 0x81483b311e262287 );                    
        SDK_FIXED_SIZE( spinlock_t, 0x38 );                    
    };                                    
};
#include "magic/spinlock_t.end.hpp"
SDK_VERIFY( struct wmi::spinlock_t, 0x38 );
