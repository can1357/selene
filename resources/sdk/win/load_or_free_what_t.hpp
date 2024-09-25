#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum LoadOrFreeWhat]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class load_or_free_what_t : int32_t
    {                                       
        load_library_succeeded = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        load_library_failed =    0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        calling_free_library =   0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
