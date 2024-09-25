#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KSOFTWARE_INTERRUPT_TARGET]
    //  Windows 11
    //
    enum class ksoftware_interrupt_target_t : int32_t
    {                                                
        none =                0x0,                     // Windows 11
        single_processor =    0x1,                     // Windows 11
        multiple_processors = 0x2,                     // Windows 11
        max =                 0x3,                     // Windows 11
    };                                               
};
