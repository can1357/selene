#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PSCREATEPROCESSNOTIFYTYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pscreateprocessnotifytype_t : int32_t 
    {                                                
        ps_create_process_notify_subsystems = 0x0,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
