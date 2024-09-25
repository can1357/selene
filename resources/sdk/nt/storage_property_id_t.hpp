#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_PROPERTY_ID]
    //  WDK 10
    //
    enum class storage_property_id_t : int32_t       
    {                                                
        device_property =                    0x0,      // WDK 10
        adapter_property =                   0x1,      // WDK 10
        device_id_property =                 0x2,      // WDK 10
        device_unique_id_property =          0x3,      // WDK 10
        device_write_cache_property =        0x4,      // WDK 10
        miniport_property =                  0x5,      // WDK 10
        access_alignment_property =          0x6,      // WDK 10
        device_seek_penalty_property =       0x7,      // WDK 10
        device_trim_property =               0x8,      // WDK 10
        device_write_aggregation_property =  0x9,      // WDK 10
        device_device_telemetry_property =   0xa,      // WDK 10
        device_lb_provisioning_property =    0xb,      // WDK 10
        device_power_property =              0xc,      // WDK 10
        device_copy_offload_property =       0xd,      // WDK 10
        device_resiliency_property =         0xe,      // WDK 10
        device_medium_product_type =         0xf,      // WDK 10
        adapter_rpmb_property =              0x10,     // WDK 10
        adapter_crypto_property =            0x11,     // WDK 10
        device_tiering_property =            0x12,     // WDK 10
        device_fault_domain_property =       0x13,     // WDK 10
        device_clusport_property =           0x14,     // WDK 10
        device_dependant_devices_property =  0x15,     // WDK 10
        device_io_capability_property =      0x30,     // WDK 10
        adapter_protocol_specific_property = 0x31,     // WDK 10
        device_protocol_specific_property =  0x32,     // WDK 10
        adapter_temperature_property =       0x33,     // WDK 10
        device_temperature_property =        0x34,     // WDK 10
        adapter_physical_topology_property = 0x35,     // WDK 10
        device_physical_topology_property =  0x36,     // WDK 10
        device_attributes_property =         0x37,     // WDK 10
        device_management_status =           0x38,     // WDK 10
        adapter_serial_number_property =     0x39,     // WDK 10
        device_location_property =           0x3a,     // WDK 10
        device_numa_property =               0x3b,     // WDK 10
        device_zoned_device_property =       0x3c,     // WDK 10
        device_unsafe_shutdown_count =       0x3d,     // WDK 10
        device_endurance_property =          0x3e,     // WDK 10
    };                                               
};
