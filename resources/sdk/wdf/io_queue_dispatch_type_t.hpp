#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_IO_QUEUE_DISPATCH_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_queue_dispatch_type_t : int32_t
    {                                            
        invalid =    0x0,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sequential = 0x1,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parallel =   0x2,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        manual =     0x3,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =        0x4,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
