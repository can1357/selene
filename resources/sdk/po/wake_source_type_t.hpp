#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum PO_WAKE_SOURCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wake_source_type_t : int32_t      
    {                                            
        device_wake_source_type =         0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed_wake_source_type =          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_wake_source_type =          0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_presumed_wake_source_type = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_wake_source_type =       0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
