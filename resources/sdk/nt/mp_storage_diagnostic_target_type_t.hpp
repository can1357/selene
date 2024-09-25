#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MP_STORAGE_DIAGNOSTIC_TARGET_TYPE]
    //  WDK 10
    //
    enum class mp_storage_diagnostic_target_type_t : int32_t
    {                                                       
        undefined =    0x0,                                   // WDK 10
        miniport =     0x2,                                   // WDK 10
        hba_firmware = 0x3,                                   // WDK 10
        max =          0x4,                                   // WDK 10
    };                                                      
};
