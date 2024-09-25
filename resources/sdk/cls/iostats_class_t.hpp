#pragma once
#include <sdkgen/support_library.hpp>

namespace cls
{
    // [enum _CLS_IOSTATS_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class iostats_class_t : int32_t
    {                                   
        _default = 0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0xffff,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
