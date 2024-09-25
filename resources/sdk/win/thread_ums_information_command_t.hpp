#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _THREAD_UMS_INFORMATION_COMMAND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class thread_ums_information_command_t : int32_t
    {                                                    
        invalid = 0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attach =  0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detach =  0x2,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query =   0x3,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
