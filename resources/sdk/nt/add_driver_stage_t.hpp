#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _ADD_DRIVER_STAGE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class add_driver_stage_t : int32_t
    {                                      
        class_config_filters = 0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lower_device_filters = 0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lower_class_filters =  0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_service =       0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        upper_device_filters = 0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        upper_class_filters =  0x5,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_add_stage =    0x6,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
