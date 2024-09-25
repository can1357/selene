#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum _CM_HIVE_CACHE_OPLOCK_EVENT_TYPE]
    //  Windows 11
    //
    enum class hive_cache_oplock_event_type_t : int32_t
    {                                                  
        event_on_primary =             0x0,              // Windows 11
        event_on_log1 =                0x1,              // Windows 11
        event_on_log2 =                0x2,              // Windows 11
        break_thread_kill_event =      0x3,              // Windows 11
        break_thread_end_event =       0x4,              // Windows 11
        break_thread_wait_events_max = 0x4,              // Windows 11
        break_thread_sync_event =      0x5,              // Windows 11
        related_events_max =           0x6,              // Windows 11
    };                                                 
};
