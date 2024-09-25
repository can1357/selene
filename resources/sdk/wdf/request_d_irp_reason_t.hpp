#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum RequestDIrpReason]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_d_irp_reason_t : int32_t
    {                                          
        d_irp_reason_invalid = 0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d_irp_failed =         0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_s0 =            0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_for_sx =            0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_sx =            0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_other =         0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_device_wake =   0x6,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_arm_wake_fail = 0x7,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_for_idle_out =      0x8,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_for_pnp_stop =      0x9,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_for_pnp_stop =      0xa,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
