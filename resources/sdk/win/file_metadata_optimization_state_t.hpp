#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_METADATA_OPTIMIZATION_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_metadata_optimization_state_t : int32_t
    {                                                      
        none =        0x0,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_progress = 0x1,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending =     0x2,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
