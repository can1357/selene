#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagIDLFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class idlflags_t : int32_t   
    {                                 
        create =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        strong =              0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noping =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noiec =               0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ftm =                 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshal_in_progress = 0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
