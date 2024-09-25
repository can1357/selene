#pragma once
#include <sdkgen/support_library.hpp>

namespace tlg
{
    // [enum _TlgFlags_t]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flags_t : int32_t
    {                           
        none =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr64 = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                          
};
