#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_PROCESSOR_STAT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class processor_stat_type_t : int32_t
    {                                         
        residency = 0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =     0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
