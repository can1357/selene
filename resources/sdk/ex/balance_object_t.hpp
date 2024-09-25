#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [enum _EX_BALANCE_OBJECT]
    //  Windows 10 v1607
    //
    enum class balance_object_t : int32_t 
    {                                     
        timer_expiration =         0x0,     // Windows 10 v1607
        thread_set_manager_event = 0x1,     // Windows 10 v1607
        thread_reaper_event =      0x2,     // Windows 10 v1607
        maximum_balance_object =   0x3,     // Windows 10 v1607
    };                                    
};
