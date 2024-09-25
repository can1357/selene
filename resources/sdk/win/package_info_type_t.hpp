#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackageInfoType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class package_info_type_t : int32_t
    {                                       
        install_path =            0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutable_path =            0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        effective_path =          0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine_external_path =   0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_external_path =      0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        effective_external_path = 0x5,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        generation =              0x10,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aliases =                 0x11,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
