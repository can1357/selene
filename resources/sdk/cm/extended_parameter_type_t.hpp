#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum CM_EXTENDED_PARAMETER_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extended_parameter_type_t : int32_t
    {                                             
        invalid_type =      0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trust_class_key =   0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =             0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_access_token = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =               0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
