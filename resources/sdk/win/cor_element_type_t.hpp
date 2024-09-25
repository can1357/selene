#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorElementType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_element_type_t : int32_t
    {                                      
        end =         0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _void =       0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boolean =     0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _char =       0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i1 =          0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u1 =          0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i2 =          0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u2 =          0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =          0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u4 =          0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =          0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u8 =          0xb,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r4 =          0xc,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8 =          0xd,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =      0xe,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr =         0xf,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        byref =       0x10,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        valuetype =   0x11,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _class =      0x12,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        var =         0x13,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        array =       0x14,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        genericinst = 0x15,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        typedbyref =  0x16,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i =           0x18,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u =           0x19,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fnptr =       0x1b,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object =      0x1c,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        szarray =     0x1d,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mvar =        0x1e,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmod_reqd =   0x1f,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmod_opt =    0x20,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal =    0x21,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x22,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modifier =    0x40,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sentinel =    0x41,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pinned =      0x45,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
