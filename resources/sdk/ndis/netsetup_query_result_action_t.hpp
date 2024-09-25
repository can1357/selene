#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_QUERY_RESULT_ACTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_query_result_action_t : int32_t
    {                                                  
        state_change = 0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        add =          0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        update =       0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove =       0x3,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
