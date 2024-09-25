#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_HDCP_FLAG]
    //  WDK 10
    //
    enum class opm_hdcp_flag_t : int32_t
    {                                   
        none =     0x0,                   // WDK 10
        repeater = 0x1,                   // WDK 10
    };                                  
};
