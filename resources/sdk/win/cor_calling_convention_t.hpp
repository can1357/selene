#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorCallingConvention]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_calling_convention_t : int32_t
    {                                            
        _default =     0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vararg =       0x5,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field =        0x6,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        local_sig =    0x7,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =     0x8,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmgd =        0x9,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        genericinst =  0xa,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nativevararg = 0xb,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0xc,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask =         0xf,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic =      0x10,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hasthis =      0x20,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        explicitthis = 0x40,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
