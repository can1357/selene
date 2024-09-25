#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum FEATURE_ENABLED_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_enabled_state_t : int32_t
    {                                           
        _default =                  0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =                  0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =                   0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_variant_configuration = 0x40,         // Windows 10 v2004, Windows 10 v20H2
        is_wexp_configuration =     0x40,         // Windows 11
        has_notification =          0x80,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
