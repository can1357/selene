#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_WebTimeline]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_web_timeline_t : uint8_t
    {                                          
        none =            0x0,                   // Windows 10 v2004, Windows 10 v20H2
        header_position = 0x1,                   // Windows 10 v2004, Windows 10 v20H2
        footer_position = 0x2,                   // Windows 10 v2004, Windows 10 v20H2
    };                                         
};
