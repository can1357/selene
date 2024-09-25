#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_THREAD_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_thread_flags_t : int32_t
    {                                      
        none =       0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminated = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
