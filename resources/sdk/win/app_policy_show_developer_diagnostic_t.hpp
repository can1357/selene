#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyShowDeveloperDiagnostic]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_show_developer_diagnostic_t : int32_t
    {                                                          
        none =    0x0,                                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        show_ui = 0x1,                                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
