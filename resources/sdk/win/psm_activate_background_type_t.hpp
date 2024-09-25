#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PSM_ACTIVATE_BACKGROUND_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class psm_activate_background_type_t : int32_t
    {                                                  
        not_background = 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mixed_host =     0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pure_host =      0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_host =    0x3,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_type =   0x4,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
