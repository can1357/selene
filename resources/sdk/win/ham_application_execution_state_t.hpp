#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_APPLICATION_EXECUTION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_application_execution_state_t : int32_t
    {                                                     
        resumed =    0x0,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspending = 0x1,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspended =  0x2,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminated = 0x3,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =      0x4,                                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
