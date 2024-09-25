#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagPSUACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class psuaction_t : int32_t
    {                               
        _default =          0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_url_only = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
