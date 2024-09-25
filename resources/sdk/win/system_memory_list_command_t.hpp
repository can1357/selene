#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_MEMORY_LIST_COMMAND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_memory_list_command_t : int32_t
    {                                                
        capture_accessed_bits =           0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_and_reset_accessed_bits = 0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        empty_working_sets =              0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_modified_list =             0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_standby_list =              0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purge_low_priority_standby_list = 0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_max =                     0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
