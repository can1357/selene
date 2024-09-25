#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagQUERYOPTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class queryoption_t : int32_t         
    {                                          
        expiration_date =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_of_last_change =          0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        content_encoding =             0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        content_type =                 0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        refresh =                      0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        recombine =                    0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        can_navigate =                 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uses_network =                 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_cached =                    0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_installedentry =            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_cached_or_mapped =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uses_cache =                   0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_secure =                    0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_safe =                      0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uses_historyfolder =           0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_cached_and_usable_offline = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
