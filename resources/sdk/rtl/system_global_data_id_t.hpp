#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_SYSTEM_GLOBAL_DATA_ID]
    //  Windows 11
    //
    enum class system_global_data_id_t : int32_t  
    {                                             
        unknown =                          0x0,     // Windows 11
        rng_seed_version =                 0x1,     // Windows 11
        interrupt_time =                   0x2,     // Windows 11
        time_zone_bias =                   0x3,     // Windows 11
        image_number_low =                 0x4,     // Windows 11
        image_number_high =                0x5,     // Windows 11
        time_zone_id =                     0x6,     // Windows 11
        nt_major_version =                 0x7,     // Windows 11
        nt_minor_version =                 0x8,     // Windows 11
        system_expiration_date =           0x9,     // Windows 11
        kd_debugger_enabled =              0xa,     // Windows 11
        cycles_per_yield =                 0xb,     // Windows 11
        safe_boot_mode =                   0xc,     // Windows 11
        last_system_rit_event_tick_count = 0xd,     // Windows 11
    };                                            
};
