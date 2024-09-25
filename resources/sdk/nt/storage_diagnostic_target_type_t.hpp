#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DIAGNOSTIC_TARGET_TYPE]
    //  WDK 10
    //
    enum class storage_diagnostic_target_type_t : int32_t
    {                                                    
        undefined =    0x0,                                // WDK 10
        port =         0x1,                                // WDK 10
        miniport =     0x2,                                // WDK 10
        hba_firmware = 0x3,                                // WDK 10
        max =          0x4,                                // WDK 10
    };                                                   
};
