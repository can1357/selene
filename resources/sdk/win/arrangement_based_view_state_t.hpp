#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ARRANGEMENT_BASED_VIEW_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class arrangement_based_view_state_t : int32_t
    {                                                  
        invalid =   0x0,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        minimized = 0x1,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restore =   0x2,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximized = 0x3,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        snapped =   0x4,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
