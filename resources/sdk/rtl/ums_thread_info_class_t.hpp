#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_UMS_THREAD_INFO_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ums_thread_info_class_t : int32_t
    {                                           
        invalid_info_class = 0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_context =       0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority =           0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        affinity =           0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        teb =                0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_suspended =       0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_terminated =      0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_info_class =     0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
