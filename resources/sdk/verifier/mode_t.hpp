#pragma once
#include <sdkgen/support_library.hpp>

namespace verifier
{
    // [enum VERIFIER_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mode_t : int32_t
    {                          
        unused = 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triage = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field =  0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logo =   0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =   0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                         
};
