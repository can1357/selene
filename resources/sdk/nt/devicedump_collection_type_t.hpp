#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICEDUMP_COLLECTION_TYPE]
    //  WDK 10
    //
    enum class devicedump_collection_type_t : int32_t
    {                                                
        bug_check =             0x1,                   // WDK 10
        application_requested = 0x2,                   // WDK 10
        device_requested =      0x3,                   // WDK 10
    };                                               
};
