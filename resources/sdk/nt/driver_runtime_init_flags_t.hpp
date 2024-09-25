#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DRIVER_RUNTIME_INIT_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class driver_runtime_init_flags_t : int32_t
    {                                               
        drv_rt_pool_nx_opt_in = 0x1,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_drv_rt_flag =      0x2,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
