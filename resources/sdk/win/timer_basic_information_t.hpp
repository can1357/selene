#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_basic_information_t.start.hpp"
namespace win
{
    // [struct _TIMER_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_basic_information_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t remaining_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RemainingTime
        _m01 uint8_t timer_state;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerState
                                    
        SDK_MAGIC_PROPERTIES( "_TIMER_BASIC_INFORMATION.$", 0x10, true, 0x66eaf921545014b );               
        SDK_FIXED_SIZE( timer_basic_information_t, 0x10 );               
    };                              
};
#include "magic/timer_basic_information_t.end.hpp"
SDK_VERIFY( struct win::timer_basic_information_t, 0x10 );
