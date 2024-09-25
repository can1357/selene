#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyProcessTerminationMethod]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_process_termination_method_t : int32_t
    {                                                           
        exit_process =      0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminate_process = 0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
