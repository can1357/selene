#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTHREAD_CORE_ISOLATION_REASON]
    //  Windows 11
    //
    enum class kthread_core_isolation_reason_t : int32_t
    {                                                   
        simulation =        0x0,                          // Windows 11
        mitigation_policy = 0x1,                          // Windows 11
        max =               0x2,                          // Windows 11
    };                                                  
};
