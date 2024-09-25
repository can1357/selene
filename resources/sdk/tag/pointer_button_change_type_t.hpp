#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPOINTER_BUTTON_CHANGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_button_change_type_t : int32_t
    {                                                
        none =              0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firstbutton_down =  0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firstbutton_up =    0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondbutton_down = 0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondbutton_up =   0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thirdbutton_down =  0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thirdbutton_up =    0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fourthbutton_down = 0x7,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fourthbutton_up =   0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fifthbutton_down =  0x9,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fifthbutton_up =    0xa,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
