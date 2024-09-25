#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_INTERNAL_STATUS_DATA_SET]
    //  WDK 10
    //
    enum class device_internal_status_data_set_t : int32_t
    {                                                     
        set_undefined = 0x0,                                // WDK 10
        set1 =          0x1,                                // WDK 10
        set2 =          0x2,                                // WDK 10
        set3 =          0x3,                                // WDK 10
        set4 =          0x4,                                // WDK 10
        set_max =       0x5,                                // WDK 10
    };                                                    
};
