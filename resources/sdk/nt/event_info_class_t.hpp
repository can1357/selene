#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EVENT_INFO_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_info_class_t : int32_t             
    {                                                   
        event_provider_binary_track_info =       0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_provider_set_enable_all_keywords = 0x1,     // Windows 10 v1607
        event_provider_set_reserved1 =           0x1,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_provider_set_traits =              0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_provider_use_descriptor_type =     0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_event_info =                         0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
