#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_REQUEST_REUSE_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_reuse_flags_t : int32_t
    {                                         
        no_flags =    0x0,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_new_irp = 0x1,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
