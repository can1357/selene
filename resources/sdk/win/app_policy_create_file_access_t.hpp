#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppPolicyCreateFileAccess]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_policy_create_file_access_t : int32_t
    {                                                   
        full =    0x0,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limited = 0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
