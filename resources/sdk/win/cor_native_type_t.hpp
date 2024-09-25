#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorNativeType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_native_type_t : int32_t
    {                                     
        end =             0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _void =           0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boolean =         0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i1 =              0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u1 =              0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i2 =              0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u2 =              0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =              0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u4 =              0x8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =              0x9,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u8 =              0xa,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r4 =              0xb,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8 =              0xc,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syschar =         0xd,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant =         0xe,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        currency =        0xf,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr =             0x10,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decimal =         0x11,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        date =            0x12,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bstr =            0x13,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lpstr =           0x14,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lpwstr =          0x15,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lptstr =          0x16,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixedsysstring =  0x17,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objectref =       0x18,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iunknown =        0x19,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idispatch =       0x1a,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _struct =         0x1b,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        intf =            0x1c,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safearray =       0x1d,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixedarray =      0x1e,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _int =            0x1f,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint =            0x20,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nestedstruct =    0x21,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        byvalstr =        0x22,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ansibstr =        0x23,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tbstr =           0x24,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variantbool =     0x25,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        func =            0x26,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asany =           0x28,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        array =           0x2a,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lpstruct =        0x2b,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custommarshaler = 0x2c,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =           0x2d,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iinspectable =    0x2e,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hstring =         0x2f,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lputf8str =       0x30,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =             0x50,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
