#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KCLOCK_TIMER_ONE_SHOT_STATE]
    //  Windows 11
    //
    enum class kclock_timer_one_shot_state_t : int32_t
    {                                                 
        unarmed =        0x0,                           // Windows 11
        armed =          0x1,                           // Windows 11
        rearm_required = 0x2,                           // Windows 11
        invalid =        0x3,                           // Windows 11
    };                                                
};
