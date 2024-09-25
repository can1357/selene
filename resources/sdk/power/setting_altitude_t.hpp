#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum POWER_SETTING_ALTITUDE]
    //  Windows 11
    //
    enum class setting_altitude_t : int32_t
    {                                      
        group_policy =      0x0,             // Windows 11
        user =              0x1,             // Windows 11
        runtime_override =  0x2,             // Windows 11
        provisioning =      0x3,             // Windows 11
        oem_customization = 0x4,             // Windows 11
        internal_override = 0x5,             // Windows 11
        os_default =        0x6,             // Windows 11
    };                                     
};
