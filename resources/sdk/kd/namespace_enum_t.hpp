#pragma once
#include <sdkgen/support_library.hpp>

namespace kd
{
    // [enum KD_NAMESPACE_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class namespace_enum_t : int32_t
    {                                    
        pci =  0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi = 0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any =  0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none = 0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =  0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
