#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAGNOSTICINFO_TYPE]
    //  WDK 10
    //
    enum class diagnosticinfo_type_t : int32_t
    {                                         
        adddevice =   0x1,                      // WDK 10
        startdevice = 0x2,                      // WDK 10
        blackscreen = 0x3,                      // WDK 10
    };                                        
};
