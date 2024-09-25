#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum RTL_DISK_WRITE_CONSTRAINT_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class disk_write_constraint_policy_t : int32_t
    {                                                  
        limited = 0x32,                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =  0x64,                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
