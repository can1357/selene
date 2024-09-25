#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/jobobject_wake_filter_t.hpp"

#include "magic/process_wake_information_t.start.hpp"
namespace ps
{
    // [struct _PS_PROCESS_WAKE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_wake_information_t                                
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                           
        _m00 uint64_t                           notification_channel;  //{ +0x0000    +0x0000    +0x0000    } | .NotificationChannel
        _m01 sdk::array<uint32_t, 7>            wake_counters;         //{ +0x0008    +0x0008    +0x0008    } | .WakeCounters
        _m02 struct nt::jobobject_wake_filter_t wake_filter;           //{ +0x0024    +0x0024    +0x0024    } | .WakeFilter
        _m03 uint32_t                           no_wake_counter;       //{ +0x002c    +0x002c    +0x002c    } | .NoWakeCounter
                                                                     
        SDK_MAGIC_PROPERTIES( "_PS_PROCESS_WAKE_INFORMATION.$", 0x30, true, 0xdc2789f99f5c98c );                     
        SDK_FIXED_SIZE( process_wake_information_t, 0x30 );                     
    };                                                               
};
#include "magic/process_wake_information_t.end.hpp"
SDK_VERIFY( struct ps::process_wake_information_t, 0x30 );
