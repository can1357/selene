#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_wake_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_WAKE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_wake_information_t                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint64_t                notification_channel;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationChannel
        _m01 sdk::array<uint64_t, 5> wake_counters;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WakeCounters
                                                          
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_WAKE_INFORMATION.$", 0x40, true, 0x8accd83036f323b5 );                     
        SDK_DYNAMIC_SIZE( jobobject_wake_information_t );                     
    };                                                    
};
#include "magic/jobobject_wake_information_t.end.hpp"
