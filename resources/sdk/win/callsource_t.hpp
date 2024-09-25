#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _CALLSOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callsource_t : int32_t
    {                                
        crossapt = 0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        crossctx = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
