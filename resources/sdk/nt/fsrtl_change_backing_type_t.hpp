#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FSRTL_CHANGE_BACKING_TYPE]
    //  WDK 10
    //
    enum class fsrtl_change_backing_type_t : int32_t
    {                                               
        data_control_area =  0x0,                     // WDK 10
        image_control_area = 0x1,                     // WDK 10
        shared_cache_map =   0x2,                     // WDK 10
    };                                              
};
