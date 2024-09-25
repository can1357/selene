#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_DEVICE_ACTION_REQUEST]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_action_request_t : int32_t    
    {                                               
        assign_resources =                  0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_device_problem =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_problem =                     0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_eject_problem =               0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        halt_device =                       0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        reserved_action0 =                  0x4,      // Windows 11
        query_power_relations =             0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rebalance =                         0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reenumerate_boot_devices =          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reenumerate_device_only =           0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reenumerate_device_tree =           0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reenumerate_root_devices =          0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        requery_device_state =              0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_device =                      0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resource_requirements_changed =     0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restart_enumeration =               0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_device_problem =                0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_device =                      0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_system_devices_pass0 =        0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_system_devices_pass1 =        0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_transport_relations_change = 0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_ejection_relations_change =  0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        configure_device =                  0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        configure_device_class =            0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        configure_device_extensions =       0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        configure_device_reset =            0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear_dma_guard_problem =           0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_device_action_request_max =     0x1a,     // Windows 10 v2004, Windows 10 v20H2
        request_device_reset =              0x1a,     // Windows 11
        update_console_lock_state =         0x1b,     // Windows 11
        //pnp_device_action_request_max =   0x1c,     // Windows 11
    };                                              
};
