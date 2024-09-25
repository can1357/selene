#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IActivatorCustomMarshal_0001]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_activator_custom_marshal_0001_t : int32_t
    {                                                          
        use_console_session =   0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_default_authn_lvl = 0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_server_pid =        0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_lua_level_admin =   0x8,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        coauth_user_is_null =   0x10,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        coauth_domain_is_null = 0x20,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        coauth_pwd_is_null =    0x40,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_lua_level_highest = 0x80,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
