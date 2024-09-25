#pragma once
#include <sdkgen/support_library.hpp>

namespace dmm
{
    // [enum _DMM_MODE_PRUNING_ALGORITHM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mode_pruning_algorithm_t : int32_t
    {                                            
        uninitialized =   0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gdi =             0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vista =           0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gdi_vista_union = 0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maxvalid =        0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
