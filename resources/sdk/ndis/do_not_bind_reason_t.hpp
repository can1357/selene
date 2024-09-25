#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_DO_NOT_BIND_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class do_not_bind_reason_t : uint32_t          
    {                                                   
        no_bind_source_wants_this_binding = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_not_ready =                  0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_bind_attempt_failed =          0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_restart_attempt_failed =       0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_rejected_binding =           0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        missing_mandatory_filter =          0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        missing_optional_filter =           0x40,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        missing_modifying_filter =          0x80,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mandatory_missing_during_boot =     0x100,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbind_on_attach =                  0x200,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbind_on_detach =                  0x400,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_low_power =                0x800,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removing_miniport =                 0x1000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rebind_needed =                     0x2000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_port_not_active =           0x8000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_miniport =                0x10000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_not_ready =                0x20000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_by_legacy_ioctl =          0x40000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_device_not_started =       0x80000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_event_inhibit_binds_above =     0x100000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_depends_on_v_bus =         0x200000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incompatible_with_notification =    0x400000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_interface_deregister =     0x800000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
