#pragma once
#include <sdkgen/support_library.hpp>

namespace ke
{
    // [enum KE_PROCESSOR_CHANGE_NOTIFY_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class processor_change_notify_state_t : int32_t
    {                                                   
        start_notify =    0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_notify = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failure_notify =  0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
