#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_PRESENTATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_presentation_class_t : int32_t
    {                                           
        never_presented = 0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        speculative =     0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hidden =          0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        concealed =       0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        full =            0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =           0x5,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
