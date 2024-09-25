#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPENDINGMSG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pendingmsg_t : int32_t
    {                                
        cancelcall =     0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waitnoprocess =  0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waitdefprocess = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
