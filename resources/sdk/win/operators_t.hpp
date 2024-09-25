#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _operators]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class operators_t : int32_t      
    {                                     
        illegal =                 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start =                   0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_arithmetic_start =  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_plus =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_start =             0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_minus =             0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_arithmetic_end =    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_logical_start =     0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_not =               0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_complement =        0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_indirection =       0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_logical_end =       0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_cast =              0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_and =               0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_sizeof =            0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_alignof =           0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_incr =                0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_decr =                0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_incr =               0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_decr =               0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_arithmetic_start = 0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_start =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        plus =                    0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unary_end =               0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        minus =                   0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        star =                    0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        slash =                   0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mod =                     0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_arithmetic_end =   0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_shift_start =      0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        left_shift =              0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        right_shift =             0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_relational_start = 0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_shift_end =        0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        less =                    0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        less_equal =              0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater_equal =           0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater =                 0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        equal =                   0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_equal =               0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _and =                    0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_bitwise_start =    0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_relational_end =   0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _or =                     0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _xor =                    0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_bitwise_end =      0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_logical_start =    0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_and =             0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_or =              0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_logical_end =      0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_ternary_start =    0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qm =                      0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        colon =                   0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_end =              0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary_ternary_end =      0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_start =          0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        function =                0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        param =                   0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pointsto =                0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dot =                     0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        index =                   0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comma =                   0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stmt =                    0x29,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assign =                  0x2a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asyncsplit =              0x2b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        corr_pointer =            0x2c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        corr_top_level =          0x2d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        end =                     0x2e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
