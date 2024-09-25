#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KCLOCK_TIMER_DEADLINE_TYPE]
    //  Windows 11
    //
    enum class kclock_timer_deadline_type_t : int32_t
    {                                                
        k_timer_expiration_non_hr =       0x0,         // Windows 11
        k_timer_expiration_pseudo_hr =    0x1,         // Windows 11
        k_timer2_expiration_hr =          0x2,         // Windows 11
        k_timers_max =                    0x2,         // Windows 11
        quantum_end =                     0x3,         // Windows 11
        group_scheduling_generation_end = 0x4,         // Windows 11
        idle_promotion =                  0x5,         // Windows 11
        bam_qos_hysteresis_end =          0x6,         // Windows 11
        max =                             0x7,         // Windows 11
    };                                               
};
