#pragma once
#include <sdkgen/support_library.hpp>

namespace tlg
{
    // [enum TlgIn_t]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class in_t : int32_t                
    {                                        
        tlg_in_null =                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_unicodestring =       0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_ansistring =          0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_int8 =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_uint8 =               0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_int16 =               0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_uint16 =              0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_int32 =               0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_long =                0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_uint32 =              0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_ulong =               0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_int64 =               0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_intptr =              0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_uint64 =              0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_uintptr =             0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_float =               0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_double =              0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_bool32 =              0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_binary =              0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_guid =                0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_pointer_unsupported = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_filetime =            0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_systemtime =          0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_sid =                 0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_hexint32 =            0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_hexlong =             0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_hexint64 =            0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_pointer =             0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_countedstring =       0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_countedansistring =   0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_struct =              0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_countedbinary =       0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //tlg_in_max =               0x19,     // Windows 10 v1607
        tlg_in_max =                 0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_type_mask =           0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_ccount =              0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_vcount =              0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_count_mask =          0x60,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_custom =              0x60,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_chain =               0x80,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tlg_in_flag_mask =           0xe0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
