#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum RTL_BSD_ITEM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bsd_item_type_t : int32_t                  
    {                                                     
        item_version_number =                     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_product_type =                       0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_aab_enabled =                        0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_aab_timeout =                        0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_boot_good =                          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_boot_shutdown =                      0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep_in_progress =                       0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_transition =                        0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_boot_attempt_count =                 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_boot_checkpoint =                    0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_boot_id =                            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_shutdown_boot_id =                   0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_reported_abnormal_shutdown_boot_id = 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_error_info =                         0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_power_button_press_info =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_checksum =                           0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //item_max =                              0x10,     // Windows 10 v1607
        power_transition_extension =              0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        item_feature_configuration_state =        0x11,     // Windows 11, Windows 10 v20H2
        //item_max =                              0x11,     // Windows 10 v2004
        item_max =                                0x12,     // Windows 11, Windows 10 v20H2
    };                                                    
};
