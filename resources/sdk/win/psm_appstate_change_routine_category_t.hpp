#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PSM_APPSTATE_CHANGE_ROUTINE_CATEGORY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class psm_appstate_change_routine_category_t : int32_t
    {                                                          
        system =      0x0,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        library =     0x1,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        framework =   0x2,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application = 0x3,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =     0x4,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
