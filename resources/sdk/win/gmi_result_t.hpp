#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum GMI_RESULT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gmi_result_t : int32_t
    {                                
        failed =    0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        success =   0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancelled = 0xff,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
