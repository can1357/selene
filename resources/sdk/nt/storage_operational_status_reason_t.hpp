#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_OPERATIONAL_STATUS_REASON]
    //  WDK 10
    //
    enum class storage_operational_status_reason_t : int32_t
    {                                                       
        unknown =                         0x0,                // WDK 10
        scsi_sense_code =                 0x1,                // WDK 10
        media =                           0x2,                // WDK 10
        io =                              0x3,                // WDK 10
        threshold_exceeded =              0x4,                // WDK 10
        lost_data =                       0x5,                // WDK 10
        energy_source =                   0x6,                // WDK 10
        configuration =                   0x7,                // WDK 10
        device_controller =               0x8,                // WDK 10
        media_controller =                0x9,                // WDK 10
        component =                       0xa,                // WDK 10
        nvdimm_n =                        0xb,                // WDK 10
        background_operation =            0xc,                // WDK 10
        invalid_firmware =                0xd,                // WDK 10
        health_check =                    0xe,                // WDK 10
        lost_data_persistence =           0xf,                // WDK 10
        disabled_by_platform =            0x10,               // WDK 10
        lost_write_persistence =          0x11,               // WDK 10
        data_persistence_loss_imminent =  0x12,               // WDK 10
        write_persistence_loss_imminent = 0x13,               // WDK 10
        max =                             0x14,               // WDK 10
    };                                                      
};
