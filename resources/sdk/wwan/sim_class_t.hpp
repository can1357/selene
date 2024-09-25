#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_SIM_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sim_class_t : int32_t
    {                               
        unknown =       0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sim_logical =   0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sim_removable = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sim_remote =    0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
