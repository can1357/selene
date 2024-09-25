#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxStateSeparationDetectionOption]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_separation_detection_option_t : int32_t
    {                                                       
        none =        0x0,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_only =    0x1,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug_break = 0x2,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_value =   0x3,                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
