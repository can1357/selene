#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_ACTIVITY_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_activity_type_t : int32_t
    {                                           
        audio = 0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =   0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
