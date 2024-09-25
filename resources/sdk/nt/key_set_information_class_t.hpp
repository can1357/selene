#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KEY_SET_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class key_set_information_class_t : int32_t
    {                                               
        key_write_time_information =         0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_wow64_flags_information =        0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_control_flags_information =      0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_set_virtualization_information = 0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_set_debug_information =          0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_set_handle_tags_information =    0x5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_set_layer_information =          0x6,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_key_set_info_class =           0x6,     // Windows 10 v1607
        max_key_set_info_class =             0x7,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
