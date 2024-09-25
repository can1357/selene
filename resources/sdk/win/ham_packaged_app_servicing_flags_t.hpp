#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_PACKAGED_APP_SERVICING_FLAGS]
    //  Windows 11
    //
    enum class ham_packaged_app_servicing_flags_t : int32_t
    {                                                      
        none =          0x0,                                 // Windows 11
        notify_host =   0x1,                                 // Windows 11
        query_restart = 0x2,                                 // Windows 11
        all_flags =     0x3,                                 // Windows 11
    };                                                     
};
