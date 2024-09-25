#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackagePathType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class package_path_type_t : int32_t
    {                                       
        install =            0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        _mutable =           0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        effective =          0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine_external =   0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_external =      0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        effective_external = 0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
