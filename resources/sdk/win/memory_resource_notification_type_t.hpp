#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MEMORY_RESOURCE_NOTIFICATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_resource_notification_type_t : int32_t
    {                                                       
        low_memory_resource_notification =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_memory_resource_notification = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
