#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _SHELLSETWINDOWPOS_OPTIONS]
    //  Windows 11
    //
    enum class shellsetwindowpos_options_t : int32_t
    {                                               
        _default =              0x0,                  // Windows 11
        noactivate =            0x1,                  // Windows 11
        nozorder =              0x2,                  // Windows 11
        monitor_from_position = 0x4,                  // Windows 11
        explicit_rcnormal =     0x8,                  // Windows 11
        foreground =            0x10,                 // Windows 11
        nonotify =              0x20,                 // Windows 11
    };                                              
};
