#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_MEM_RESET_INFO_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_mem_reset_info_type_t : int32_t
    {                                                  
         =            0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        undo =        0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        undo_failed = 0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x3,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
