#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_DUPLICATE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_duplicate_flags_t : int32_t
    {                                         
        none =         0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        close_source = 0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
