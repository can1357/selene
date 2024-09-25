#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PackageFamilyErrorDetails]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class package_family_error_details_t : int32_t
    {                                                  
        unknown =           0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        installed =         0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_found =         0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        multiple_versions = 0x3,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_name =      0x4,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
