#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_AVAILABLE_PAGE_WAIT_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class available_page_wait_types_t : int32_t
    {                                               
        low =       0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high =      0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        very_high = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =   0x3,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
