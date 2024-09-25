#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_PROTECTED_SESSION_STATUS]
    //  WDK 10
    //
    enum class protected_session_status_t : int32_t
    {                                              
        ok =      0x0,                               // WDK 10
        invalid = 0x1,                               // WDK 10
    };                                             
};
