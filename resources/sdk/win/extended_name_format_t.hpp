#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EXTENDED_NAME_FORMAT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extended_name_format_t : int32_t
    {                                          
        unknown =            0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fully_qualified_dn = 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sam_compatible =     0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        display =            0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_id =          0x6,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        canonical =          0x7,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_principal =     0x8,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        canonical_ex =       0x9,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_principal =  0xa,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dns_domain =         0xc,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        given_name =         0xd,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surname =            0xe,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
