#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TOKEN_SECURITY_ATTRIBUTE_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class token_security_attribute_operation_t : int32_t
    {                                                        
        none =        0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        replace_all = 0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add =         0x2,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _delete =     0x3,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        replace =     0x4,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
