#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagLOCKTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class locktype_t : int32_t
    {                              
        write =     0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exclusive = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        onlyonce =  0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
