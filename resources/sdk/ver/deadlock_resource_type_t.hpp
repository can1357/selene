#pragma once
#include <sdkgen/support_library.hpp>

namespace ver
{
    // [enum _VI_DEADLOCK_RESOURCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class deadlock_resource_type_t : int32_t
    {                                            
        unknown =                   0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutex =                     0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutex_abandoned =           0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast_mutex =                0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast_mutex_unsafe =         0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spin_lock =                 0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_stack_queued_spin_lock = 0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unused_spin_lock =          0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eresource =                 0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_maximum =              0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
