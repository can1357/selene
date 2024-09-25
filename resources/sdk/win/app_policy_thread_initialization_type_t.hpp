#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyThreadInitializationType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_thread_initialization_type_t : int32_t
    {                                                           
        none =              0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_win_rt = 0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
