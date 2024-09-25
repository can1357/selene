#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_STACK_TRACE_DATABASE_CONTROL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stack_trace_database_control_t : int32_t
    {                                                  
        create =      0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _delete =     0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush =       0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_control = 0x3,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
