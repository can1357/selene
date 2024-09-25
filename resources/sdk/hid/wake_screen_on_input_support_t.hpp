#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _WAKE_SCREEN_ON_INPUT_SUPPORT]
    //  Windows 11
    //
    enum class wake_screen_on_input_support_t : int32_t
    {                                                  
        none =         0x0,                              // Windows 11
        touch_screen = 0x1,                              // Windows 11
    };                                                 
};
