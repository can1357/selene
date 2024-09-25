#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum NDR64_FORMAT_CHARACTER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ndr64_format_character_t : int32_t
    {                                            
        zero =                     0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint8 =                    0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int8 =                     0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint16 =                   0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int16 =                    0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int32 =                    0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint32 =                   0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64 =                    0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64 =                   0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int128 =                   0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint128 =                  0xa,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        float32 =                  0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        float64 =                  0xc,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        float80 =                  0xd,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        float128 =                 0xe,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _char =                    0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wchar =                    0x11,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore =                   0x12,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_status_t =           0x13,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pointer =                  0x14,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rp =                       0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up =                       0x21,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        op =                       0x22,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fp =                       0x23,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip =                       0x24,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _struct =                  0x30,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pstruct =                  0x31,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_struct =              0x32,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_pstruct =             0x33,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bogus_struct =             0x34,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forced_bogus_struct =      0x35,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_bogus_struct =        0x36,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forced_conf_bogus_struct = 0x37,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_handle =            0x3c,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fix_array =                0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_array =               0x41,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        var_array =                0x42,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        confvar_array =            0x43,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fix_forced_bogus_array =   0x44,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fix_bogus_array =          0x45,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forced_bogus_array =       0x46,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bogus_array =              0x47,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        encapsulated_union =       0x50,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_encapsulated_union =   0x51,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        char_string =              0x60,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wchar_string =             0x61,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_string =            0x62,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_char_string =         0x63,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_wchar_string =        0x64,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conf_struct_string =       0x65,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_context =             0x70,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_generic =             0x71,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_primitive =           0x72,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_handle =              0x73,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_handle =          0x74,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supplement =               0x75,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_repeat =                0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed_repeat =             0x81,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variable_repeat =          0x82,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed_offset =             0x83,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variable_offset =          0x84,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        structpadn =               0x90,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        embedded_complex =         0x91,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_align =             0x92,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        end =                      0x93,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        transmit_as =              0xa0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        represent_as =             0xa1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_marshal =             0xa2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe =                     0xa3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        range =                    0xa4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pad =                      0xa5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
