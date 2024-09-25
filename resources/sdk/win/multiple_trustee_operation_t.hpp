#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MULTIPLE_TRUSTEE_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class multiple_trustee_operation_t : int32_t
    {                                                
        no_multiple_trustee =    0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trustee_is_impersonate = 0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
