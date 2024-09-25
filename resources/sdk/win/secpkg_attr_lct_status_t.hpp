#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SECPKG_ATTR_LCT_STATUS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class secpkg_attr_lct_status_t : int32_t
    {                                            
        yes =   0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no =    0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maybe = 0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
