#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ID_NAA_FORMAT]
    //  WDK 10
    //
    enum class storage_id_naa_format_t : int32_t
    {                                           
        ieee_extended =             0x2,          // WDK 10
        ieee_registered =           0x3,          // WDK 10
        ieeee_registered_extended = 0x5,          // WDK 10
    };                                          
};
