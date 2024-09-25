#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxMachineSleepStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class machine_sleep_states_t : int32_t
    {                                          
        s1_index =         0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s2_index =         0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s3_index =         0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep_states_max = 0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
