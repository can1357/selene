#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorSerializationType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_serialization_type_t : int32_t
    {                                            
        undefined =     0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boolean =       0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _char =         0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i1 =            0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u1 =            0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i2 =            0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u2 =            0x7,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =            0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u4 =            0x9,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =            0xa,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u8 =            0xb,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r4 =            0xc,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8 =            0xd,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =        0xe,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        szarray =       0x1d,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type =          0x50,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tagged_object = 0x51,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field =         0x53,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =      0x54,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _enum =         0x55,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
