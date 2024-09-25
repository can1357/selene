#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _WMIENABLEDISABLECONTROL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wmienabledisablecontrol_t : int32_t
    {                                             
        event_control =      0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_block_control = 0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
