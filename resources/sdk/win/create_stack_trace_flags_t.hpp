#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CreateStackTraceFlags]
    //  Windows 10 v1607
    //
    enum class create_stack_trace_flags_t : int32_t
    {                                              
        createstacktrace_onlyaddresses = 0x1,        // Windows 10 v1607
    };                                             
};
