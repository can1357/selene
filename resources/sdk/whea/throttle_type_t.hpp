#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_THROTTLE_TYPE]
    //  Windows 11
    //
    enum class throttle_type_t : int32_t
    {                                   
        pcie_throttle =   0x0,            // Windows 11
        memory_throttle = 0x1,            // Windows 11
    };                                  
};
