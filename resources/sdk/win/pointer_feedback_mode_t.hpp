#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum POINTER_FEEDBACK_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_feedback_mode_t : int32_t
    {                                           
        _default = 0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        indirect = 0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =     0x3,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
