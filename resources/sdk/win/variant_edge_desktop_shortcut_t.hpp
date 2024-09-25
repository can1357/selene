#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_EdgeDesktopShortcut]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_edge_desktop_shortcut_t : uint8_t
    {                                                   
        none =                 0x0,                       // Windows 10 v2004, Windows 10 v20H2
        create_on_next_login = 0x1,                       // Windows 10 v2004, Windows 10 v20H2
    };                                                  
};
