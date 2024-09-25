#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dialog_control_dpi_change_behaviors_t : int32_t
    {                                                         
        _default =            0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_font_update = 0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_relayout =    0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
