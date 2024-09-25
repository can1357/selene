#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_IMAGE_MITIGATION_OPTION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class image_mitigation_option_state_t : int32_t
    {                                                   
        not_configured = 0x0,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        on =             0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        off =            0x2,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
