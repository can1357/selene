#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SES_ELEMENT_TYPE]
    //  WDK 10
    //
    enum class ses_element_type_t : int32_t
    {                                      
        unknown =                  0x0,      // WDK 10
        device_slot =              0x1,      // WDK 10
        power_supply =             0x2,      // WDK 10
        cooling =                  0x3,      // WDK 10
        temperature_sensor =       0x4,      // WDK 10
        door =                     0x5,      // WDK 10
        audible_alarm =            0x6,      // WDK 10
        controller =               0x7,      // WDK 10
        scsi_controller =          0x8,      // WDK 10
        non_volatile_cache =       0x9,      // WDK 10
        invalid_operation_reason = 0xa,      // WDK 10
        ups =                      0xb,      // WDK 10
        display =                  0xc,      // WDK 10
        keypad =                   0xd,      // WDK 10
        enclosure =                0xe,      // WDK 10
        scsi_port =                0xf,      // WDK 10
        language =                 0x10,     // WDK 10
        communication_port =       0x11,     // WDK 10
        voltage_sensor =           0x12,     // WDK 10
        current_sensor =           0x13,     // WDK 10
        scsi_target_port =         0x14,     // WDK 10
        scsi_initiator_port =      0x15,     // WDK 10
        sub_enclosure =            0x16,     // WDK 10
        array_device_slot =        0x17,     // WDK 10
        sas_expander =             0x18,     // WDK 10
        sas_connector =            0x19,     // WDK 10
        max =                      0x1a,     // WDK 10
    };                                     
};
