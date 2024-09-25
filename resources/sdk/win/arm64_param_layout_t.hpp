#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ARM64_PARAM_LAYOUT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class arm64_param_layout_t : int32_t
    {                                        
        reg_x0 =    0x80,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x1 =    0x81,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x2 =    0x82,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x3 =    0x83,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x4 =    0x84,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x5 =    0x85,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x6 =    0x86,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_x7 =    0x87,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v0l =   0x88,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v0h =   0x89,                      // Windows 10 v1607
        reg_v1l =   0x89,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v1l = 0x8a,                      // Windows 10 v1607
        reg_v2l =   0x8a,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v1h =   0x8b,                      // Windows 10 v1607
        reg_v3l =   0x8b,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v2l = 0x8c,                      // Windows 10 v1607
        reg_v4l =   0x8c,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v2h =   0x8d,                      // Windows 10 v1607
        reg_v5l =   0x8d,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v3l = 0x8e,                      // Windows 10 v1607
        reg_v6l =   0x8e,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v3h =   0x8f,                      // Windows 10 v1607
        reg_v7l =   0x8f,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_s0s1 =  0x90,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v4l = 0x90,                      // Windows 10 v1607
        reg_s1s2 =  0x91,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v4h =   0x91,                      // Windows 10 v1607
        reg_s2s3 =  0x92,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v5l = 0x92,                      // Windows 10 v1607
        reg_s3s4 =  0x93,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v5h =   0x93,                      // Windows 10 v1607
        reg_s4s5 =  0x94,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v6l = 0x94,                      // Windows 10 v1607
        reg_s5s6 =  0x95,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v6h =   0x95,                      // Windows 10 v1607
        reg_s6s7 =  0x96,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reg_v7l = 0x96,                      // Windows 10 v1607
        reg_d0 =    0x97,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_v7h =   0x97,                      // Windows 10 v1607
        reg_d1 =    0x98,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_d2 =    0x99,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_d3 =    0x9a,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_d4 =    0x9b,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_d5 =    0x9c,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_rle =    0x9d,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ranged =    0x9e,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_used =  0x9f,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_hfa = 0xa0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
