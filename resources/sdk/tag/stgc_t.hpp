#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSTGC]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stgc_t : int32_t                     
    {                                               
        _default =                           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        overwrite =                          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        onlyifcurrent =                      0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dangerouslycommitmerelytodiskcache = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        consolidate =                        0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
