#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unbiased_timer_t.start.hpp"
namespace win
{
    // [class UnbiasedTimer]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class unbiased_timer_t             
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 const uint32_t dw_timeout;  //{ +0x0000    +0x0000    +0x0000    } | ._dwTimeout
        _m01 uint64_t       start_time;  //{ +0x0008    +0x0008    +0x0008    } | ._startTime
        _m02 bool           is_started;  //{ +0x0010    +0x0010    +0x0010    } | ._isStarted
                                       
        SDK_MAGIC_PROPERTIES( "UnbiasedTimer.$", 0x18, true, 0xeeb4473f35f5d17c );           
        SDK_FIXED_SIZE( unbiased_timer_t, 0x18 );           
    };                                 
};
#include "magic/unbiased_timer_t.end.hpp"
SDK_VERIFY( class win::unbiased_timer_t, 0x18 );
