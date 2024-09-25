#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wake_information_t.start.hpp"
namespace ps
{
    // [struct _PS_WAKE_INFORMATION]
    // => Windows 10 v1607
    //
    struct wake_information_t                             
    {                                                     
        // Windows 10 v1607                               
        //                                                
        _m00 uint64_t                notification_channel;  //{ +0x0000    } | .NotificationChannel
        _m01 sdk::array<uint64_t, 5> wake_counters;         //{ +0x0008    } | .WakeCounters
        _m02 uint64_t                no_wake_counter;       //{ +0x0030    } | .NoWakeCounter
                                                          
        SDK_MAGIC_PROPERTIES( "_PS_WAKE_INFORMATION.$", 0x0, false, 0x2a69c0f2b584aecc );                     
        SDK_FIXED_SIZE( wake_information_t, 0x38 );                     
    };                                                    
};
#include "magic/wake_information_t.end.hpp"
SDK_VERIFY( struct ps::wake_information_t, 0x38 );
