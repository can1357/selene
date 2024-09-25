#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxListEntryNames]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class list_entry_names_t : int32_t
    {                                      
        name_cleanup =     0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue_owned =      0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_owned =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forward_progress = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
