#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEBUGOBJECTINFOCLASS]
    //  WDK 10
    //
    enum class debugobjectinfoclass_t : int32_t                
    {                                                          
        debug_object_unused_information =               0x0,     // WDK 10
        debug_object_kill_process_on_exit_information = 0x1,     // WDK 10
        max_debug_object_info_class =                   0x2,     // WDK 10
    };                                                         
};
