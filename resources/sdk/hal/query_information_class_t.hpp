#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_QUERY_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class query_information_class_t : int32_t                     
    {                                                                  
        installed_bus_information =                            0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_source_information =                           0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_class_unused1 =                            0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_information =                                    0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_speed_information =                          0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_information =                                 0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        map_register_information =                             0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mca_log_information =                                  0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frame_buffer_caching_information =                     0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_bios_information =                             0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_feature_information =                        0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_topology_interface =                              0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_information =                                    0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmc_log_information =                                  0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpe_log_information =                                  0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_mca_interface =                                  0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_amli_illegal_io_port_addresses =                 0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_max_hot_plug_memory_address =                    0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        partition_ipi_interface =                              0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_information =                                 0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_profile_source_list =                            0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_log_information =                                 0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frequency_information =                                0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_brand_string =                               0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hypervisor_information =                               0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_timer_information =                           0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi_audit_information =                               0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        irt_information =                                      0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_interrupt_information =                      0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parking_page_information =                             0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_range_table_information =                         0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        channel_topology_information =                         0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_cache_information =                           0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_debugger_information =                           0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fw_boot_performance_information =                      0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fw_s3_performance_information =                        0x23,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_channel_power_information =                        0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_state_element_information =                      0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        psci_information =                                     0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt_controller_information =                     0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_iommu_reserved_region_information =              0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_arm_errata_information =                         0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_processor_efficiency_information =               0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_acpi_wake_alarm_system_power_state_information = 0x2b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_profile_number_of_counters =                     0x2c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_hyperlaunch_entrypoint =                         0x2d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_watchdog_information =                        0x2e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_remapping_information =                            0x2f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_unused0001 =                                     0x30,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        heterogeneous_memory_attributes_interface =            0x31,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_per_device_msi_limit_information =               0x32,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_profile_corruption_status =                      0x33,     // Windows 11
        query_profile_counter_ownership =                      0x34,     // Windows 11
    };                                                                 
};
