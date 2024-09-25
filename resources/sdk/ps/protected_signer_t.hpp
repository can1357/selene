#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_PROTECTED_SIGNER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class protected_signer_t : int32_t
    {                                      
        none =         0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        authenticode = 0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        code_gen =     0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        antimalware =  0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lsa =          0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        windows =      0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win_tcb =      0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win_system =   0x7,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app =          0x8,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =        0x8,                  // Windows 10 v1607
        max =          0x9,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
