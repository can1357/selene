#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SCSI_NOTIFICATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scsi_notification_type_t : int32_t  
    {                                              
        request_complete =               0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        next_request =                   0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        next_lu_request =                0x2,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_detected =                 0x3,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        obsolete1 =                      0x4,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        obsolete2 =                      0x5,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_timer_call =             0x6,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bus_change_detected =            0x7,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmi_event =                      0x8,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmi_reregister =                 0x9,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_up =                        0xa,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_down =                      0xb,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_tick_count =               0xc,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_overrun_detected =        0xd,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_notification =             0xe,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_extended_function_table =    0xf,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_passive_initialization =  0x1000,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_dpc =                 0x1001,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        issue_dpc =                      0x1002,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acquire_spin_lock =              0x1003,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release_spin_lock =              0x1004,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        state_change_detected_call =     0x1005,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_target_request_service_time = 0x1006,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_notification_detected =    0x1007,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_direct_complete =        0x1008,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_dpc_with_context =    0x1009,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_threaded_dpc =        0x100a,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_target_processor_dpc =       0x100b,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_device_failed =             0x100c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_device_failed_ex =          0x100d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminate_system_thread =        0x100e,     // Windows 11
    };                                             
};
