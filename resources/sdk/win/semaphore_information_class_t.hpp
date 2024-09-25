#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SEMAPHORE_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class semaphore_information_class_t : int32_t
    {                                                 
        semaphore_basic_information = 0x0,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
