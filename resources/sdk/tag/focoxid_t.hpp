#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagFOCOXID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class focoxid_t : int32_t
    {                             
        ref =   0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noref = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
