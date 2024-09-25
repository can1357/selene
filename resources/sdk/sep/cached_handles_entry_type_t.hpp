#pragma once
#include <sdkgen/support_library.hpp>

namespace sep
{
    // [enum _SEP_CACHED_HANDLES_ENTRY_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cached_handles_entry_type_t : int32_t
    {                                               
        lowbox =        0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bno_isolation = 0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
