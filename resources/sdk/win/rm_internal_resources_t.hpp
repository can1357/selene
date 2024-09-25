#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_INTERNAL_RESOURCES]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_internal_resources_t : int32_t
    {                                           
        io_counter = 0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit =     0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =      0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
