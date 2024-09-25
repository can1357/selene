#pragma once
#include <sdkgen/support_library.hpp>

namespace dmm
{
    // [enum _DMM_VIDPNCHANGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vidpnchange_type_t : int32_t
    {                                      
        uninitialized =  0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        updatemodality = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addpath =        0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addpaths =       0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removepath =     0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removeallpaths = 0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
