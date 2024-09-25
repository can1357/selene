#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KPROCESS_PPM_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kprocess_ppm_policy_t : int32_t
    {                                         
        process_ppm_default =          0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_throttle =         0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_semi_throttle =    0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_no_throttle =      0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_window_minimized = 0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_window_occluded =  0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_window_visible =   0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_ppm_window_in_focus =  0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_process_ppm_policy =       0x8,     // Windows 10 v2004, Windows 10 v20H2
        process_ppm_maximum_throttle = 0x8,     // Windows 11
        //max_process_ppm_policy =     0x9,     // Windows 11
    };                                        
};
