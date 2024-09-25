#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_INPUT_SUPPRESSION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_suppression_state_t : int32_t
    {                                             
        disengaged =     0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        engaged =        0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_only = 0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
