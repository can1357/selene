#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ISA_AVAILABILITY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class isa_availability_t : int32_t
    {                                      
        armnt =      0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        x86 =        0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neon =       0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sse2 =       0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neon_arm64 = 0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sse42 =      0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        avx =        0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enfstrg =    0x4,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        avx2 =       0x5,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        avx512 =     0x6,                    // Windows 11
    };                                     
};
