#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _THREAD_STATE_CHANGE_TYPE]
    //  Windows 11
    //
    enum class thread_state_change_type_t : int32_t
    {                                              
        suspend = 0x0,                               // Windows 11
        resume =  0x1,                               // Windows 11
        max =     0x2,                               // Windows 11
    };                                             
};
