#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum MFND_CHILD_CONTROLLER_CONTROL_SELECT]
    //  Windows 11
    //
    enum class mfnd_child_controller_control_select_t : int32_t
    {                                                          
        secure_erase = 0x0,                                      // Windows 11
        pause =        0x1,                                      // Windows 11
        resume =       0x2,                                      // Windows 11
        shutdown =     0x3,                                      // Windows 11
    };                                                         
};
