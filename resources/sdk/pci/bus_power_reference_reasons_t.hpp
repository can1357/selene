#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_BUS_POWER_REFERENCE_REASONS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bus_power_reference_reasons_t : int32_t
    {                                                 
        allow_f1_disable_bridge_d3 =           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_child_needs_d0 =                0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_child_needs_d1or2 =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_pme_triggered =                 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_bus_pnp_operation_pending =     0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_power_scheme_callback_pending = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_bus_wait_wake_complete =        0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_child_wait_wake_complete =      0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_retiring_child_d0_irps =        0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_child_needs_config_access =     0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reason_maximum =                       0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
