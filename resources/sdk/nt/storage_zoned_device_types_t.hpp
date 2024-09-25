#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ZONED_DEVICE_TYPES]
    //  WDK 10
    //
    enum class storage_zoned_device_types_t : int32_t
    {                                                
        unknown =        0x0,                          // WDK 10
        host_managed =   0x1,                          // WDK 10
        host_aware =     0x2,                          // WDK 10
        device_managed = 0x3,                          // WDK 10
    };                                               
};
