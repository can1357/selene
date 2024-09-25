#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagINSTALLUILEVEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class installuilevel_t : int32_t
    {                                    
        nochange =      0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =      0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =          0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        basic =         0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reduced =       0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full =          0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hidecancel =    0x20,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progressonly =  0x40,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enddialog =     0x80,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sourceresonly = 0x100,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uaconly =       0x200,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
