#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IInternetSecurityManager_0001]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_internet_security_manager_0001_t : int32_t
    {                                                           
        _default =                     0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noui =                         0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        isfile =                       0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warn_if_denied =               0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forceui_foreground =           0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_tifs =                   0x10,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dontcheckboxindialog =         0x20,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trusted =                      0x40,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accept_wildcard_scheme =       0x80,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enforcerestricted =            0x100,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nosavedfilecheck =             0x200,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        requiresavedfilecheck =        0x400,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_use_cache =               0x1000,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =                    0x2000,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =                    0x4000,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lmz_unlocked =                 0x10000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lmz_locked =                   0x20000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defaultzonepol =               0x40000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        npl_use_locked_if_restricted = 0x80000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nouiiflocked =                 0x100000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dragprotocolcheck =            0x200000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
