#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HARDERROR_RESPONSE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class harderror_response_t : int32_t
    {                                        
        return_to_caller = 0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_handled =      0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abort =            0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel =           0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore =           0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no =               0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok =               0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry =            0x7,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        yes =              0x8,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        try_again =        0x9,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _continue =        0xa,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
