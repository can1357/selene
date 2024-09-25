#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum UnmarshalingPolicyCheckReason]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class unmarshaling_policy_check_reason_t : int32_t
    {                                                      
        unmarshaler =              0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handler =                  0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        envoy =                    0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsctx_no_custom_marshal = 0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
