#pragma once
#include <sdkgen/support_library.hpp>

namespace trace
{
    // [enum _TRACE_QUERY_INFO_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class query_info_class_t : int32_t              
    {                                                    
        trace_guid_query_list =                  0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_guid_query_info =                  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_guid_query_process =               0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_stack_tracing_info =               0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_system_trace_enable_flags_info =   0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_sampled_profile_interval_info =    0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_profile_source_config_info =       0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_profile_source_list_info =         0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_pmc_event_list_info =              0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_pmc_counter_list_info =            0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_set_disallow_list =                0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_version_info =                     0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_group_query_list =                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_group_query_info =                 0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_disallow_list_query =              0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_compression_info =                 0xf,      // Windows 10 v1607
        trace_info_reserved15 =                  0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_trace_set_info_class =             0x10,     // Windows 10 v1607
        trace_periodic_capture_state_list_info = 0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_periodic_capture_state_info =      0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_provider_binary_tracking =         0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_max_loggers_query =                0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_lbr_configuration_info =           0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_lbr_event_list_info =              0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_max_pmc_counter_query =            0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_trace_set_info_class =               0x17,     // Windows 10 v2004, Windows 10 v20H2
        trace_stream_count =                     0x17,     // Windows 11
        trace_stack_caching_info =               0x18,     // Windows 11
        trace_pmc_counter_owners =               0x19,     // Windows 11
        trace_unified_stack_caching_info =       0x1a,     // Windows 11
        //max_trace_set_info_class =             0x1b,     // Windows 11
    };                                                   
};
