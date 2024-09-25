#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ARM_PARAM_LAYOUT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class arm_param_layout_t : int32_t
    {                                      
        reg_r0 =   0x80,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_r1 =   0x81,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_r2 =   0x82,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_r3 =   0x83,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s0 =   0x84,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s1 =   0x85,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s2 =   0x86,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s3 =   0x87,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s4 =   0x88,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s5 =   0x89,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s6 =   0x8a,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s7 =   0x8b,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s8 =   0x8c,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s9 =   0x8d,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s10 =  0x8e,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s11 =  0x8f,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s12 =  0x90,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s13 =  0x91,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s14 =  0x92,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s15 =  0x93,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_rle =   0x9d,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ranged =   0x9e,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_used = 0x9f,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
