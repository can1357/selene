#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Ole32SQMFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ole32sqm_flags_t : int32_t
    {                                    
        sixteenbit_ole_usage = 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oledde_usage =         0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
