#pragma once
#include <sdkgen/support_library.hpp>

namespace asl
{
    // [enum ASL_TELEMETRY_LEVEL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class telemetry_level_t : int32_t
    {                                     
        telemetry = 0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        measures =  0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
