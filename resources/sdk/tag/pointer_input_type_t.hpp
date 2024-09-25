#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPOINTER_INPUT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_input_type_t : int32_t
    {                                        
        pointer =  0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch =    0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen =      0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mouse =    0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touchpad = 0x5,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
