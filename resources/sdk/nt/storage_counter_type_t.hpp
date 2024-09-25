#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_COUNTER_TYPE]
    //  WDK 10
    //
    enum class storage_counter_type_t : int32_t
    {                                          
        unknown =                     0x0,       // WDK 10
        temperature_celsius =         0x1,       // WDK 10
        temperature_celsius_max =     0x2,       // WDK 10
        read_errors_total =           0x3,       // WDK 10
        read_errors_corrected =       0x4,       // WDK 10
        read_errors_uncorrected =     0x5,       // WDK 10
        write_errors_total =          0x6,       // WDK 10
        write_errors_corrected =      0x7,       // WDK 10
        write_errors_uncorrected =    0x8,       // WDK 10
        manufacture_date =            0x9,       // WDK 10
        start_stop_cycle_count =      0xa,       // WDK 10
        start_stop_cycle_count_max =  0xb,       // WDK 10
        load_unload_cycle_count =     0xc,       // WDK 10
        load_unload_cycle_count_max = 0xd,       // WDK 10
        wear_percentage =             0xe,       // WDK 10
        wear_percentage_warning =     0xf,       // WDK 10
        wear_percentage_max =         0x10,      // WDK 10
        power_on_hours =              0x11,      // WDK 10
        read_latency100ns_max =       0x12,      // WDK 10
        write_latency100ns_max =      0x13,      // WDK 10
        flush_latency100ns_max =      0x14,      // WDK 10
        max =                         0x15,      // WDK 10
    };                                         
};
