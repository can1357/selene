#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RunningInDcomLaunchState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class running_in_dcom_launch_state_t : int32_t
    {                                                  
        running_in_dcom_launch_not_determined = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        running_in_dcom_launch =                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_running_in_dcom_launch =            0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
