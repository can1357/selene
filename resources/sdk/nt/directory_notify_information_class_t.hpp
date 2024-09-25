#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DIRECTORY_NOTIFY_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class directory_notify_information_class_t : int32_t
    {                                                        
        information =          0x1,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_information = 0x2,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_information =     0x3,                            // Windows 11
        maximum_information =  0x4,                            // Windows 11
    };                                                       
};
