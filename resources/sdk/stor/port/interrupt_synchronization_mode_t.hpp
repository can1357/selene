#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _INTERRUPT_SYNCHRONIZATION_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_synchronization_mode_t : int32_t
    {                                                    
        support_none =            0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronize_all =         0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronize_per_message = 0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
