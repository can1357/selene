#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerCapValues]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_cap_values_t : int32_t 
    {                                       
        device_d1_false =          0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d2_false =          0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d0_false =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d1_false =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d2_false =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d3_false =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d1_true =           0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d1_use_default =    0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d1_mask =           0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d2_true =           0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d2_use_default =    0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_d2_mask =           0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d0_true =        0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d0_use_default = 0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d0_mask =        0x30,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d1_true =        0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d1_use_default = 0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d1_mask =        0xc0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d2_true =        0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d2_use_default = 0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d2_mask =        0x300,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d3_true =        0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d3_use_default = 0x800,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_d3_mask =        0xc00,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
