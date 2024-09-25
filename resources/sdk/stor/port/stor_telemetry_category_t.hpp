#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_TELEMETRY_CATEGORY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_telemetry_category_t : int32_t
    {                                             
        telemetry_category = 0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        measures_category =  0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
