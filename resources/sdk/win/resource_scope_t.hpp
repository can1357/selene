#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ResourceScope]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class resource_scope_t : int32_t 
    {                                     
        per_system =               0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        per_package =              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        per_package_family =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        local_experience_package = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
