#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_PROC_EMPTY_POLICY]
    //  Windows 11
    //
    enum class rm_proc_empty_policy_t : int32_t
    {                                          
        by_system_policy = 0x0,                  // Windows 11
        immediate =        0x1,                  // Windows 11
        force =            0x2,                  // Windows 11
        count =            0x3,                  // Windows 11
    };                                         
};
