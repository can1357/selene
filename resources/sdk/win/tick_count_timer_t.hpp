#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tick_count_timer_t.start.hpp"
namespace win
{
    // [class TickCountTimer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class tick_count_timer_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                
        _m00 const uint32_t dw_timeout;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._dwTimeout
        _m01 uint64_t       initial_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._initialCount
                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                
        _m02 bool           b_started;      //{ +0x0010    +0x0010    +0x0010    } | ._bStarted
                                          
        SDK_MAGIC_PROPERTIES( "TickCountTimer.$", 0x18, true, 0xfc791c79c23c4411 );              
        SDK_DYNAMIC_SIZE( tick_count_timer_t );              
    };                                    
};
#include "magic/tick_count_timer_t.end.hpp"
