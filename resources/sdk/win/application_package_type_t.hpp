#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _ApplicationPackageType]
    //  Windows 11, Windows 10 v20H2
    //
    enum class application_package_type_t : int32_t
    {                                              
        appx =      0x0,                             // Windows 11, Windows 10 v20H2
        xap =       0x1,                             // Windows 11, Windows 10 v20H2
        fulltrust = 0x2,                             // Windows 11, Windows 10 v20H2
        //max =     0x3,                             // Windows 11
        proxied =   0x3,                             // Windows 10 v20H2
        max =       0x4,                             // Windows 10 v20H2
    };                                             
};
