#pragma once
#include <sdkgen/support_library.hpp>

namespace ob
{
    // [enum _OB_PREOP_CALLBACK_STATUS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class preop_callback_status_t : int32_t
    {                                           
        ob_preop_success = 0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
