#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL___MIDL_itf_activate_0000_0010_0003]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_midl_itf_activate_0000_0010_0003_t : int32_t
    {                                                           
        complus =   0x1,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspended = 0x2,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retired =   0x4,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ready =     0x8,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =    0x10,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
