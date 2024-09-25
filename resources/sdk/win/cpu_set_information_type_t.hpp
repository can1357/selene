#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _CPU_SET_INFORMATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cpu_set_information_type_t : int32_t
    {                                              
        cpu_set_information = 0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
