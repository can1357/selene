#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagADVF]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class advf_t : int32_t          
    {                                    
        advf_nodata =            0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advf_primefirst =        0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advf_onlyonce =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advfcache_nohandler =    0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advfcache_forcebuiltin = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advfcache_onsave =       0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        advf_dataonstop =        0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
