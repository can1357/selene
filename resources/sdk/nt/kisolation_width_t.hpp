#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KISOLATION_WIDTH]
    //  Windows 11
    //
    enum class kisolation_width_t : int32_t
    {                                      
        logical_processor = 0x0,             // Windows 11
        core =              0x1,             // Windows 11
        max =               0x2,             // Windows 11
    };                                     
};
