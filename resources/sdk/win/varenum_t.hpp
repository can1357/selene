#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum VARENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class varenum_t : int32_t   
    {                                
        empty =            0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =             0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i2 =               0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =               0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r4 =               0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8 =               0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cy =               0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        date =             0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bstr =             0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch =         0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =            0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _bool =            0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant =          0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =          0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decimal =          0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i1 =               0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ui1 =              0x11,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ui2 =              0x12,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ui4 =              0x13,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =               0x14,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ui8 =              0x15,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _int =             0x16,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint =             0x17,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _void =            0x18,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hresult =          0x19,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr =              0x1a,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safearray =        0x1b,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        carray =           0x1c,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        userdefined =      0x1d,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lpstr =            0x1e,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lpwstr =           0x1f,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        record =           0x24,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_ptr =          0x25,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint_ptr =         0x26,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filetime =         0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        blob =             0x41,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stream =           0x42,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        storage =          0x43,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        streamed_object =  0x44,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stored_object =    0x45,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        blob_object =      0x46,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cf =               0x47,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clsid =            0x48,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        versioned_stream = 0x49,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bstr_blob =        0xfff,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        illegalmasked =    0xfff,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        typemask =         0xfff,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vector =           0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        array =            0x2000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        byref =            0x4000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved =         0x8000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        illegal =          0xffff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
