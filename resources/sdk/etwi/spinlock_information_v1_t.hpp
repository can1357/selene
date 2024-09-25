#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/spinlock_information_v1_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_SPINLOCK_INFORMATION_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spinlock_information_v1_t                                         
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                   
        _m00 enum etwi::information_class_t event_trace_information_class;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint32_t                       spin_lock_spin_threshold;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SpinLockSpinThreshold
        _m02 uint32_t                       spin_lock_acquire_sample_rate;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SpinLockAcquireSampleRate
        _m03 uint32_t                       spin_lock_contention_sample_rate;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SpinLockContentionSampleRate
                                                                             
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_SPINLOCK_INFORMATION_V1.$", 0x10, true, 0x57b1b8902c0d30bb );                                 
        SDK_FIXED_SIZE( spinlock_information_v1_t, 0x10 );                                 
    };                                                                       
};
#include "magic/spinlock_information_v1_t.end.hpp"
SDK_VERIFY( struct etwi::spinlock_information_v1_t, 0x10 );
