#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_SHARED_USER_PAGE_TYPES]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shared_user_page_types_t : int32_t
    {                                            
        kernel =     0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hypervisor = 0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =    0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
