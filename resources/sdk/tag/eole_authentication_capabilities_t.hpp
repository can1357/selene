#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagEOLE_AUTHENTICATION_CAPABILITIES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class eole_authentication_capabilities_t : int32_t
    {                                                      
        none =              0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutual_auth =       0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secure_refs =       0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_control =    0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appid =             0x8,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic =           0x10,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        static_cloaking =   0x20,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_cloaking =  0x40,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any_authority =     0x80,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        make_fullsic =      0x100,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_fullsic =   0x200,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_impersonate =  0x400,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =          0x800,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_aaa =       0x1000,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_custom_marshal = 0x2000,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =         0x4000,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
