#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WdfDeviceStartStateType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_start_state_type_t : int32_t
    {                                             
        unknown =     0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_started = 0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =     0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =     0x3,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
