#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCALLCONV]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callconv_t : int32_t
    {                              
        fastcall =   0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdecl =      0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mscpascal =  0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pascal =     0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        macpascal =  0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stdcall =    0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fpfastcall = 0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syscall =    0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mpwcdecl =   0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mpwpascal =  0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =        0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
