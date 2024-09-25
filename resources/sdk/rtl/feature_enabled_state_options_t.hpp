#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_FEATURE_ENABLED_STATE_OPTIONS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_enabled_state_options_t : int32_t
    {                                                   
        none =        0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wexp_config = 0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
