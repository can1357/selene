#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxObjectDroppedEvent]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_dropped_event_t : int32_t
    {                                          
        assign_parent_object =         0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_child_object_internal =    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_child_object_internal = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delete_object =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        perform_early_dispose =        0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_parent_assignment =     0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_delete_event =          0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
