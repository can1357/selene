#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NBL_TRACKER_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nbl_tracker_mode_t : int32_t
    {                                      
        disabled =            0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_only =            0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        runtime_check =       0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_log_no_stack =   0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_log_with_stack = 0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
