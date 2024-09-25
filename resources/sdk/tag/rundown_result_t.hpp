#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRUNDOWN_RESULT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rundown_result_t : int32_t
    {                                    
        unknown = 0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        keep =    0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown = 0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
