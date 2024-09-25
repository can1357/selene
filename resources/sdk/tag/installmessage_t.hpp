#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagINSTALLMESSAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class installmessage_t : int32_t
    {                                    
        fatalexit =      0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =          0x1000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warning =        0x2000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =           0x3000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        info =           0x4000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filesinuse =     0x5000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resolvesource =  0x6000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outofdiskspace = 0x7000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        actionstart =    0x8000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        actiondata =     0x9000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progress =       0xa000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        commondata =     0xb000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize =     0xc000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminate =      0xd000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        showdialog =     0xe000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        performance =    0xf000000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rmfilesinuse =   0x19000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        installstart =   0x1a000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        installend =     0x1b000000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
