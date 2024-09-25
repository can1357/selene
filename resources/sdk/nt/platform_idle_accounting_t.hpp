#pragma once
#include <sdkgen/support_library.hpp>
#include "../ppm/idle_bucket_time_type_t.hpp"
#include "platform_idle_state_accounting_t.hpp"

#include "magic/platform_idle_accounting_t.start.hpp"
namespace nt
{
    // [struct _PLATFORM_IDLE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct platform_idle_accounting_t                           
    {                                                           
        using state_t = sdk::array<struct nt::platform_idle_state_accounting_t, 1>;                 
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 uint32_t                          reset_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResetCount
        _m01 uint32_t                          state_count;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StateCount
        _m02 uint32_t                          deep_sleep_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeepSleepCount
        _m03 enum ppm::idle_bucket_time_type_t time_unit;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeUnit
        _m04 uint64_t                          start_time;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartTime
        _m05 state_t                           state;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
                                                                
        SDK_MAGIC_PROPERTIES( "_PLATFORM_IDLE_ACCOUNTING.$", 0x408, true, 0xfa6f9691f1a94e29 );                 
        SDK_DYNAMIC_SIZE( platform_idle_accounting_t );                 
    };                                                          
};
#include "magic/platform_idle_accounting_t.end.hpp"
