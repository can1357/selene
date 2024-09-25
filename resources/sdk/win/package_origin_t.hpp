#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackageOrigin]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class package_origin_t : int32_t
    {                                    
        unknown =            0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _unsigned =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inbox =              0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        store =              0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        developer_unsigned = 0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        developer_signed =   0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        line_of_business =   0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
