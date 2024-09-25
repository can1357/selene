#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerTypeEnum]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_type_enum_t : uint32_t
    {                                       
        normal_exe =      0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_service =     0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        svchost_service = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
