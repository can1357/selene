#pragma once
#include <sdkgen/support_library.hpp>

namespace heap
{
    // [enum _HEAP_SEGMGR_LARGE_PAGE_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class segmgr_large_page_policy_t : int32_t
    {                                              
        no_large_pages =        0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_large_pages =    0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal_policy =         0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_small =           0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_large =           0x3,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_random =          0x4,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_page_policy_max = 0x5,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
