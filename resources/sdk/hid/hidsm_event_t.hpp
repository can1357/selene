#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _HIDSM_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hidsm_event_t : int32_t                                
    {                                                                 
        null =                                               0x3e8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        continue_if_no_sub_state =                           0x3e9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no =                                                 0x7d1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_completed =                                       0x7d2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_remove =                                         0x7d3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_failure =                                  0x7d5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_completed =                                       0x7d6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p_start =                                         0x7d7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_pending =                                  0x7d9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_callback_invoked =                              0x7da,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p_stop =                                          0x7db,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_success =                                  0x7dd,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_irp_completed =                                 0x7de,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p_suprise_remove =                                0x7df,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        yes =                                                0x7e1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_pdo_completed_dx =                              0x7e2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        po_fx_power_not_required =                           0x7e3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_io_flushed =                                 0x7e6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        po_fx_power_required =                               0x7e7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s0 =                                                 0x7ea,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx =                                                 0x7eb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_wake_completed =                                0x7ef,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_irp_completed_with_status_cancelled =           0x7f2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_pdo_completed_d0 =                              0x7f6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_irp_completed_with_status_power_state_invalid = 0x7fa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                
};
