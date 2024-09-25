#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERRUPT_STEERING_MODE]
    //  Windows 11
    //
    enum class interrupt_steering_mode_t : int32_t
    {                                             
        none =             0x0,                     // Windows 11
        controller =       0x1,                     // Windows 11
        redirect =         0x2,                     // Windows 11
        controller_fixed = 0x3,                     // Windows 11
    };                                            
};
