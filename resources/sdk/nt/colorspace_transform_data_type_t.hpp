#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COLORSPACE_TRANSFORM_DATA_TYPE]
    //  WDK 10
    //
    enum class colorspace_transform_data_type_t : int32_t
    {                                                    
        fixed_point = 0x0,                                 // WDK 10
        _float =      0x1,                                 // WDK 10
    };                                                   
};
