#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum DeviceObjectState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_object_state_t : int32_t
    {                                         
        started = 0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped = 0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed = 0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
