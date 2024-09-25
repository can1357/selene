#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_PREEMPTIVE_TRIMS]
    //  Windows 10 v1607
    //
    enum class preemptive_trims_t : int32_t     
    {                                           
        preempt_for_non_paged =          0x0,     // Windows 10 v1607
        preempt_for_paged =              0x1,     // Windows 10 v1607
        preempt_for_non_paged_priority = 0x2,     // Windows 10 v1607
        preempt_for_paged_priority =     0x3,     // Windows 10 v1607
        maximum_preempt =                0x4,     // Windows 10 v1607
    };                                          
};
