#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_CHILD_DEVICE_TYPE]
    //  WDK 10
    //
    enum class child_device_type_t : int32_t
    {                                       
        uninitialized =      0x0,             // WDK 10
        video_output =       0x1,             // WDK 10
        other =              0x2,             // WDK 10
        integrated_display = 0x3,             // WDK 10
    };                                      
};
