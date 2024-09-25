#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DebugEventFlags]
    //  Windows 10 v1607
    //
    enum class debug_event_flags_t : int32_t
    {                                       
        _default =       0x0,                 // Windows 10 v1607
        no_stack_trace = 0x1,                 // Windows 10 v1607
        dont_link =      0x2,                 // Windows 10 v1607
    };                                      
};
