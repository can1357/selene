#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_crash_dump_register_type_t : int32_t
    {                                                  
        set1 =    0x0,                                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set2 =    0x1,                                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_max = 0x2,                                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
