#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_COMPLETION_ROUTINE_RESULT]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class completion_routine_result_t : int32_t
    {                                               
        //stop_completion =   -0x3fffffea,            // WDK 10
        continue_completion = 0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_completion =     0xc0000016,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
