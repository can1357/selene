#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum PROCESS_UI_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_ui_flags_t : int32_t
    {                                      
        none =                  0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        authoring_mode =        0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restrictions_disabled = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
