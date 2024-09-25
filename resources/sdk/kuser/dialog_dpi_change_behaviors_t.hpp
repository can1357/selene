#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum DIALOG_DPI_CHANGE_BEHAVIORS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dialog_dpi_change_behaviors_t : int32_t
    {                                                 
        _default =                 0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_all =              0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_resize =           0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_control_relayout = 0x4,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
