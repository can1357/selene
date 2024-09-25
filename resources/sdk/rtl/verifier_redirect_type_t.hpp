#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_VERIFIER_REDIRECT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class verifier_redirect_type_t : int32_t
    {                                            
        gpa_lookup =       0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delayload_lookup = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        legacy_lookup =    0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_lookup_type =  0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
