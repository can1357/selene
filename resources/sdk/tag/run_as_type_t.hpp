#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRunAsType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class run_as_type_t : int32_t
    {                                 
        specified_user =   0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interactive_user = 0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        launching_user =   0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_virtual =  0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        package =          0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
