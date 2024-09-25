#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagShutdownType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shutdown_type_t : int32_t
    {                                   
        idle_shutdown =   0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forced_shutdown = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
