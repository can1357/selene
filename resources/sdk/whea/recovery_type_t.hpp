#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_RECOVERY_TYPE]
    //  Windows 11
    //
    enum class recovery_type_t : int32_t
    {                                   
        srar = 0x1,                       // Windows 11
        srao = 0x2,                       // Windows 11
        max =  0x3,                       // Windows 11
    };                                  
};
