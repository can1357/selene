#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorUnmanagedCallingConvention]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_unmanaged_calling_convention_t : int32_t
    {                                                      
        cs_callconv_c =               0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged_callconv_c =        0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cs_callconv_stdcall =         0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged_callconv_stdcall =  0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cs_callconv_thiscall =        0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged_callconv_thiscall = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cs_callconv_fastcall =        0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged_callconv_fastcall = 0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
