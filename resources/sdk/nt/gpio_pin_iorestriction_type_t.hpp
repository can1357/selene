#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _GPIO_PIN_IORESTRICTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gpio_pin_iorestriction_type_t : int32_t
    {                                                 
        none =              0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        input_only =        0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        output_only =       0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none_and_preserve = 0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
