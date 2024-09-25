#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _REQUESTER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class requester_type_t : int32_t      
    {                                          
        kernel_requester =              0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_process_requester =        0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_shared_service_requester = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
