#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_HARDWARE_ERROR_STATE]
    //  WDK 10
    //
    enum class diag_display_hardware_error_state_t : int32_t
    {                                                       
        state_uninitialized = 0x0,                            // WDK 10
        none =                0x1,                            // WDK 10
        scanout_underflow =   0x2,                            // WDK 10
        tdrnorecovery =       0x3,                            // WDK 10
        unspecified =         0x4,                            // WDK 10
    };                                                      
};
