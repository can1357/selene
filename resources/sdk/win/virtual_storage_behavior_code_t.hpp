#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _VIRTUAL_STORAGE_BEHAVIOR_CODE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class virtual_storage_behavior_code_t : int32_t
    {                                                   
        undefined =             0x0,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache_write_through =   0x1,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache_write_back =      0x2,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_io_processing =    0x3,                      // Windows 11
        restart_io_processing = 0x4,                      // Windows 11
    };                                                  
};
