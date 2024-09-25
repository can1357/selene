#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DEVICE_POWER_CAP_UNITS]
    //  WDK 10
    //
    enum class storage_device_power_cap_units_t : int32_t
    {                                                    
        percent =    0x0,                                  // WDK 10
        milliwatts = 0x1,                                  // WDK 10
    };                                                   
};
