#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COLORSPACE_TRANSFORM_TARGET_CAPS_VERSION]
    //  WDK 10
    //
    enum class colorspace_transform_target_caps_version_t : int32_t
    {                                                              
        version_default =       0x0,                                 // WDK 10
        version_not_supported = 0x0,                                 // WDK 10
        version_1 =             0x1,                                 // WDK 10
    };                                                             
};
