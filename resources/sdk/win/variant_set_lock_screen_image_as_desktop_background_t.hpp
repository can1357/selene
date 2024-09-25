#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_SetLockScreenImageAsDesktopBackground]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_set_lock_screen_image_as_desktop_background_t : uint8_t
    {                                                                         
        none =               0x0,                                               // Windows 10 v2004, Windows 10 v20H2
        show_favorite_icon = 0x1,                                               // Windows 10 v2004, Windows 10 v20H2
    };                                                                        
};
