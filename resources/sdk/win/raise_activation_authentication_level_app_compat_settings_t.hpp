#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RaiseActivationAuthenticationLevelAppCompatSettings]
    //  Windows 11
    //
    enum class raise_activation_authentication_level_app_compat_settings_t : int32_t
    {                                                                               
        no_raise =                   0x0,                                             // Windows 11
        raise_default =              0x1,                                             // Windows 11
        raise_default_and_explicit = 0x2,                                             // Windows 11
    };                                                                              
};
