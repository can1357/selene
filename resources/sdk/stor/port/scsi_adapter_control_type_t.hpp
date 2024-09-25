#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SCSI_ADAPTER_CONTROL_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scsi_adapter_control_type_t : int32_t        
    {                                                       
        //make_adapter_control_type_size_of_ulong = -0x1,     // WDK 10
        scsi_query_supported_control_types =        0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_stop_adapter =                         0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_restart_adapter =                      0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_set_boot_config =                      0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_set_running_config =                   0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //scsi_adapter_control_max =                0x5,      // WDK 10
        scsi_power_setting_notification =           0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_power =                        0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_power_required =         0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_power_active =           0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_power_set_f_state =      0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_power_control =          0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_prepare_for_bus_re_scan =      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_system_power_hints =           0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_filter_resource_requirements = 0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_max_operational_power =  0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_po_fx_set_perf_state =         0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_surprise_removal =             0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_serial_number =                0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //scsi_adapter_control_max =                0x12,     // Windows 10 v1607
        scsi_adapter_crypto_operation =             0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_adapter_control_max =                  0x13,     // Windows 10 v2004, Windows 10 v20H2
        scsi_adapter_query_fru_id =                 0x13,     // Windows 11
        scsi_adapter_set_event_logging =            0x14,     // Windows 11
        scsi_adapter_report_internal_data =         0x15,     // Windows 11
        //scsi_adapter_control_max =                0x16,     // Windows 11
        make_adapter_control_type_size_of_ulong =   0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
