#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_WindowTabHost]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_window_tab_host_t : uint8_t
    {                                             
        none =  0x0,                                // Windows 10 v2004, Windows 10 v20H2
        all =   0x1,                                // Windows 10 v2004, Windows 10 v20H2
        five =  0x2,                                // Windows 10 v2004, Windows 10 v20H2
        three = 0x3,                                // Windows 10 v2004, Windows 10 v20H2
        zero =  0x4,                                // Windows 10 v2004, Windows 10 v20H2
    };                                            
};
