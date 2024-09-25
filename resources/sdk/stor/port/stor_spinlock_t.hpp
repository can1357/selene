#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_SPINLOCK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_spinlock_t : int32_t
    {                                   
        dpc_lock =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_io_lock =     0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt_lock =    0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        threaded_dpc_lock = 0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpc_level_lock =    0x5,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
