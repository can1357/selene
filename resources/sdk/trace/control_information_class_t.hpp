#pragma once
#include <sdkgen/support_library.hpp>

namespace trace
{
    // [enum _TRACE_CONTROL_INFORMATION_CLASS]
    //  WDK 10
    //
    enum class control_information_class_t : int32_t     
    {                                                    
        start_logger =                           0x1,      // WDK 10
        stop_logger =                            0x2,      // WDK 10
        query_logger =                           0x3,      // WDK 10
        update_logger =                          0x4,      // WDK 10
        flush_logger =                           0x5,      // WDK 10
        increment_logger_file =                  0x6,      // WDK 10
        realtime_connect =                       0xb,      // WDK 10
        wdi_dispatch_control =                   0xd,      // WDK 10
        realtime_disconnect_consumer_by_handle = 0xe,      // WDK 10
        receive_notification =                   0x10,     // WDK 10
        enable_guid =                            0x11,     // WDK 10
        send_reply_data_block =                  0x12,     // WDK 10
        receive_reply_data_block =               0x13,     // WDK 10
        wdi_update_sem =                         0x14,     // WDK 10
        get_trace_guid_list =                    0x15,     // WDK 10
        get_trace_guid_info =                    0x16,     // WDK 10
        enumerate_trace_guids =                  0x17,     // WDK 10
        query_reference_time =                   0x19,     // WDK 10
        track_provider_binary =                  0x1a,     // WDK 10
        add_notification_event =                 0x1b,     // WDK 10
        update_disallow_list =                   0x1c,     // WDK 10
        use_descriptor_type_um =                 0x1f,     // WDK 10
        get_trace_group_list =                   0x20,     // WDK 10
        get_trace_group_info =                   0x21,     // WDK 10
        trace_set_disallow_list =                0x22,     // WDK 10
        set_compression_settings =               0x23,     // WDK 10
        get_compression_settings =               0x24,     // WDK 10
        update_periodic_capture_state =          0x25,     // WDK 10
        get_private_session_trace_handle =       0x26,     // WDK 10
        register_private_session =               0x27,     // WDK 10
        query_session_demux_object =             0x28,     // WDK 10
        set_provider_binary_tracking =           0x29,     // WDK 10
        max_loggers =                            0x2a,     // WDK 10
        max_pmc_counter =                        0x2b,     // WDK 10
    };                                                   
};
