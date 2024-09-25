#pragma once
#include <sdkgen/support_library.hpp>

namespace etwi
{
    // [enum _EVENT_TRACE_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class information_class_t : int32_t                            
    {                                                                   
        event_trace_kernel_version_information =                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_group_mask_information =                    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_performance_information =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_time_profile_information =                  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_session_security_information =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_spinlock_information =                      0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_stack_tracing_information =                 0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_executive_resource_information =            0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_heap_tracing_information =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_heap_summary_tracing_information =          0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_pool_tag_filter_information =               0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_pebs_tracing_information =                  0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_config_information =                0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_source_list_information =           0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_event_list_information =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_counter_list_information =          0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_stack_caching_information =                 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_object_type_filter_information =            0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_soft_restart_information =                  0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_last_branch_configuration_information =     0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_event_trace_info_class =                          0x13,     // Windows 10 v1607
        event_trace_last_branch_event_list_information =        0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_source_add_information =            0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_profile_source_remove_information =         0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_processor_trace_configuration_information = 0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_processor_trace_event_list_information =    0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_coverage_sampler_information =              0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_trace_unified_stack_caching_information =         0x1a,     // Windows 11
        max_event_trace_info_class =                            0x1a,     // Windows 10 v2004, Windows 10 v20H2
        //max_event_trace_info_class =                          0x1b,     // Windows 11
    };                                                                  
};
