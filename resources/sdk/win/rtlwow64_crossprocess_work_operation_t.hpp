#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RTLWOW64_CROSSPROCESS_WORK_OPERATION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rtlwow64_crossprocess_work_operation_t : int32_t
    {                                                          
        memory_alloc_pre_notify =       0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_alloc_post_notify =      0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_free_pre_notify =        0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_free_post_notify =       0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_protect_pre_notify =     0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_protect_post_notify =    0x5,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        instruction_cache_flush =       0x6,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        instruction_cache_flush_heavy = 0x7,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_dirty_notify =           0x8,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
