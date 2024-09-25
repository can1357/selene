#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SWITCH_CONTEXT_SOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class switch_context_source_t : int32_t
    {                                           
        unknown =       0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe_system =     0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appx_manifest = 0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uac_manifest =  0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        environment =   0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shim_override = 0x5,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =      0x6,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
