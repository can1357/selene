#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _MFND_CHILD_PF_CONTROL_ACTION]
    //  Windows 11
    //
    enum class mfnd_child_pf_control_action_t : int32_t
    {                                                  
        reserved =     0x0,                              // Windows 11
        secure_erase = 0x1,                              // Windows 11
        pause =        0x2,                              // Windows 11
        resume =       0x3,                              // Windows 11
        shutdown =     0x4,                              // Windows 11
        max =          0x5,                              // Windows 11
    };                                                 
};
