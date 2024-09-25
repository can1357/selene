#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_CRASH_DUMP_CONFIGURATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_crash_dump_configuration_class_t : int32_t
    {                                                           
        disable =                 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reconfigure =             0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialization_complete = 0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
