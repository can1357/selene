#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [enum _VIDEO_DEVICE_DATA_TYPE]
    //  WDK 10
    //
    enum class device_data_type_t : int32_t
    {                                      
        machine_data =    0x0,               // WDK 10
        cmos_data =       0x1,               // WDK 10
        bus_data =        0x2,               // WDK 10
        controller_data = 0x3,               // WDK 10
        monitor_data =    0x4,               // WDK 10
    };                                     
};
