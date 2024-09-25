#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IBindStatusCallback_0005]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_bind_status_callback_0005_t : int32_t
    {                                                      
        options_wininetflag =              0x10000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_enable_utf8 =              0x20000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_disable_utf8 =             0x40000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_use_ie_encoding =          0x80000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_bindtoobject =             0x100000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_securityoptout =           0x200000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_ignoremimetextplain =      0x400000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_usebindstringcreds =       0x800000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_ignorehttphttpsredirects = 0x1000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_ignore_sslerrors_once =    0x2000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpc_downloadblocked =              0x8000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpc_logging_enabled =              0x10000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_allowconnectdata =         0x20000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_disableautoredirects =     0x40000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_shdocvw_navigate =         0x80000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
