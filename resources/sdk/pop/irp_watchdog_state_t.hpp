#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_IRP_WATCHDOG_STATE]
    //  Windows 11
    //
    enum class irp_watchdog_state_t : int32_t
    {                                        
        disabled =          0x0,               // Windows 11
        enabled =           0x1,               // Windows 11
        completed =         0x2,               // Windows 11
        blackbox_selected = 0x3,               // Windows 11
    };                                       
};
