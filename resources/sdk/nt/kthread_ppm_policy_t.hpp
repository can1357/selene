#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KTHREAD_PPM_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kthread_ppm_policy_t : int32_t
    {                                        
        thread_ppm_default =          0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ppm_throttle =         0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ppm_semi_throttle =    0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ppm_no_throttle =      0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_thread_ppm_policy =       0x4,     // Windows 10 v2004, Windows 10 v20H2
        thread_ppm_maximum_throttle = 0x4,     // Windows 11
        //max_thread_ppm_policy =     0x5,     // Windows 11
    };                                       
};
