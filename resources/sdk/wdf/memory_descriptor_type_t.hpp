#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_MEMORY_DESCRIPTOR_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_descriptor_type_t : int32_t
    {                                            
        invalid = 0x0,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer =  0x1,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mdl =     0x2,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle =  0x3,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
