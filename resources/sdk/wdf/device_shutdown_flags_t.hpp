#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DEVICE_SHUTDOWN_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_shutdown_flags_t : int32_t
    {                                           
        shutdown =             0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_chance_shutdown = 0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
