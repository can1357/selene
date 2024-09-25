#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_SingleTabVisuals]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_single_tab_visuals_t : uint8_t
    {                                                
        none =               0x0,                      // Windows 10 v2004, Windows 10 v20H2
        wider_tab =          0x1,                      // Windows 10 v2004, Windows 10 v20H2
        variable_width_tab = 0x2,                      // Windows 10 v2004, Windows 10 v20H2
        full_width_tab =     0x3,                      // Windows 10 v2004, Windows 10 v20H2
    };                                               
};
