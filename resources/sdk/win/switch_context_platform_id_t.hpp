#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SWITCH_CONTEXT_PLATFORM_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class switch_context_platform_id_t : int32_t
    {                                                
        vista_id =                     0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win7_id =                      0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win8_id =                      0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winblue_id =                   0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winthreshold_id =              0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_supported_platform_count = 0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
