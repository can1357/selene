#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDISCARDCACHE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class discardcache_t : int32_t
    {                                  
        saveifdirty = 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nosave =      0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
