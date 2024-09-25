#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_GUID_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class guid_type_t : int32_t    
    {                                   
        trace_guid_type =        0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notification_guid_type = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        group_guid_type =        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        guid_type_max =          0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
