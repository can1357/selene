#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_PROCESS_CLASSIFICATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_process_classification_t : int32_t
    {                                                   
        normal =          0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =          0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secure_system =   0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mem_compression = 0x3,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum =       0x4,                            // Windows 10 v1607
        registry =        0x4,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =         0x5,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
