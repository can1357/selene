#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_EVENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_event_type_t : int32_t
    {                                     
        notification_event =    0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronization_event = 0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
