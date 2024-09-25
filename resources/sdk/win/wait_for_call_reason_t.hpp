#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WaitForCallReason]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wait_for_call_reason_t : uint32_t
    {                                           
        for_reply = 0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        to_retry =  0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
