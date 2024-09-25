#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagLocalServerType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class local_server_type_t : int32_t
    {                                       
        type16 = 0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type32 = 0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
