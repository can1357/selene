#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SCSI_UNIT_CONTROL_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scsi_unit_control_type_t : int32_t         
    {                                                     
        scsi_query_supported_unit_control_types = 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_usage =                         0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_start =                         0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_power =                         0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_po_fx_power_info =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_po_fx_power_required =          0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_po_fx_power_active =            0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_po_fx_power_set_f_state =       0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_po_fx_power_control =           0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_remove =                        0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_surprise_removal =              0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_rich_description =              0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //scsi_unit_control_max =                 0xc,      // Windows 10 v1607
        scsi_unit_query_bus_type =                0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scsi_unit_control_max =                   0xd,      // Windows 10 v2004, Windows 10 v20H2
        scsi_unit_query_fru_id =                  0xd,      // Windows 11
        scsi_unit_report_internal_data =          0xe,      // Windows 11
        //scsi_unit_control_max =                 0xf,      // Windows 11
        make_unit_control_type_size_of_ulong =    0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
