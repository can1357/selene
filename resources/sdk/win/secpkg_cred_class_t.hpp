#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SECPKG_CRED_CLASS]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class secpkg_cred_class_t : int32_t
    {                                       
        none =               0x0,             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ephemeral =          0xa,             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persisted_generic =  0x14,            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persisted_specific = 0x1e,            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _explicit =          0x28,            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
