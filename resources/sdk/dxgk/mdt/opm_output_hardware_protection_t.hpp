#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_OUTPUT_HARDWARE_PROTECTION]
    //  WDK 10
    //
    enum class opm_output_hardware_protection_t : int32_t
    {                                                    
        not_supported = 0x0,                               // WDK 10
        supported =     0x1,                               // WDK 10
    };                                                   
};
