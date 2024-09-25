#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REGQUERY_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class regquery_flags_t : int32_t
    {                                    
        multisz =         0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allowquotequote = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
