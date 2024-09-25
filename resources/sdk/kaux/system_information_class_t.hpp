#pragma once
#include <sdkgen/support_library.hpp>

namespace kaux
{
    // [enum AUX_SYSTEM_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_information_class_t : int32_t
    {                                              
        module_information =         0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_table_information = 0x4c,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
