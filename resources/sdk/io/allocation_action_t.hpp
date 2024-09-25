#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_ALLOCATION_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class allocation_action_t : int32_t      
    {                                             
        keep_object =                      0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deallocate_object =                0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deallocate_object_keep_registers = 0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
