#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WaitSignalFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wait_signal_flags_t : int32_t
    {                                       
        break_under_verifier = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        break_under_debugger = 0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_break =         0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
