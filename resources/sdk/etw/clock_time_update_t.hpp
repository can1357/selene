#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clock_time_update_t.start.hpp"
namespace etw
{
    // [struct _ETW_CLOCK_TIME_UPDATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clock_time_update_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t interrupt_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptTime
        _m01 uint32_t clock_owner;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClockOwner
                                     
        SDK_MAGIC_PROPERTIES( "_ETW_CLOCK_TIME_UPDATE.$", 0x10, true, 0x954644d77f5b8591 );               
        SDK_FIXED_SIZE( clock_time_update_t, 0x10 );               
    };                               
};
#include "magic/clock_time_update_t.end.hpp"
SDK_VERIFY( struct etw::clock_time_update_t, 0x10 );
