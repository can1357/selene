#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_spinlock_config_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SPINLOCK_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_spinlock_config_t                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint32_t spin_lock_spin_threshold;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLockSpinThreshold
        _m01 uint32_t spin_lock_contention_sample_rate;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SpinLockContentionSampleRate
        _m02 uint32_t spin_lock_acquire_sample_rate;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SpinLockAcquireSampleRate
        _m03 uint32_t spin_lock_hold_threshold;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SpinLockHoldThreshold
                                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SPINLOCK_CONFIG.$", 0x10, true, 0xca4458ba2da6082b );                                 
        SDK_FIXED_SIZE( perfinfo_spinlock_config_t, 0x10 );                                 
    };                                                 
};
#include "magic/perfinfo_spinlock_config_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_spinlock_config_t, 0x10 );
