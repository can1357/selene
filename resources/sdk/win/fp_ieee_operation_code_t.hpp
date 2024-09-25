#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FP_IEEE_OPERATION_CODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fp_ieee_operation_code_t : int32_t
    {                                            
        unspecified = 0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add =         0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        subtract =    0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multiply =    0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        divide =      0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        square_root = 0x5,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remainder =   0x6,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compare =     0x7,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        convert =     0x8,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        round =       0x9,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        truncate =    0xa,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        floor =       0xb,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ceil =        0xc,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acos =        0xd,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asin =        0xe,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        atan =        0xf,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        atan2 =       0x10,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cabs =        0x11,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cos =         0x12,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cosh =        0x13,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exp =         0x14,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fabs =        0x15,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fmod =        0x16,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frexp =       0x17,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hypot =       0x18,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ldexp =       0x19,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log =         0x1a,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log10 =       0x1b,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modf =        0x1c,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pow =         0x1d,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sin =         0x1e,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sinh =        0x1f,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tan =         0x20,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tanh =        0x21,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        y0 =          0x22,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        y1 =          0x23,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        yn =          0x24,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
