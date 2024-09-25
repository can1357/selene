#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_wake_information_v1_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_WAKE_INFORMATION_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_wake_information_v1_t                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint64_t                notification_channel;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationChannel
        _m01 sdk::array<uint64_t, 4> wake_counters;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WakeCounters
                                                          
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_WAKE_INFORMATION_V1.$", 0x28, true, 0x10ba3ed5163f25d8 );                     
        SDK_FIXED_SIZE( jobobject_wake_information_v1_t, 0x28 );                     
    };                                                    
};
#include "magic/jobobject_wake_information_v1_t.end.hpp"
SDK_VERIFY( struct win::jobobject_wake_information_v1_t, 0x28 );
