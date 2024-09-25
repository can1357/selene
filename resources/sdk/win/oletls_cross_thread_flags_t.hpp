#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum OLETLS_CROSS_THREAD_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oletls_cross_thread_flags_t : int32_t
    {                                               
        priority_event_pending =    0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatchable_call_pending = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
