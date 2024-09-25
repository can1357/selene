#pragma once
#include <sdkgen/support_library.hpp>

namespace clfs
{
    // [enum _CLFS_LOG_ARCHIVE_MODE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class log_archive_mode_t : int32_t
    {                                      
        enabled =  0x1,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled = 0x2,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
