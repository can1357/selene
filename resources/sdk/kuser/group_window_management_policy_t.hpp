#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum GROUP_WINDOW_MANAGEMENT_POLICY]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class group_window_management_policy_t : int32_t
    {                                                    
        none =                   0x0,                      // Windows 10 v2004, Windows 10 v20H2
        delegate_close_request = 0x1,                      // Windows 10 v2004, Windows 10 v20H2
    };                                                   
};
