#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxEventQueueFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_queue_flags_t : int32_t
    {                                       
        work_item_queued = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        closed =           0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delay_deletion =   0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
