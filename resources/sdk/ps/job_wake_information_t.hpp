#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/job_wake_information_t.start.hpp"
namespace ps
{
    // [struct _PS_JOB_WAKE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_wake_information_t                         
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint64_t                notification_channel;  //{ +0x0000    +0x0000    +0x0000    } | .NotificationChannel
        _m01 sdk::array<uint64_t, 7> wake_counters;         //{ +0x0008    +0x0008    +0x0008    } | .WakeCounters
        _m02 uint64_t                no_wake_counter;       //{ +0x0040    +0x0040    +0x0040    } | .NoWakeCounter
                                                          
        SDK_MAGIC_PROPERTIES( "_PS_JOB_WAKE_INFORMATION.$", 0x48, true, 0x2f6e7a6268a8f64a );                     
        SDK_FIXED_SIZE( job_wake_information_t, 0x48 );                     
    };                                                    
};
#include "magic/job_wake_information_t.end.hpp"
SDK_VERIFY( struct ps::job_wake_information_t, 0x48 );
