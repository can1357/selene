#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxSelfManagedIoEvents]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class self_managed_io_events_t : int32_t
    {                                            
        invalid = 0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start =   0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanup = 0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend = 0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush =   0x8,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =    0xff,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
