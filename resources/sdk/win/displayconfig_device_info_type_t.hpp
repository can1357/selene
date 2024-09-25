#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_DEVICE_INFO_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_device_info_type_t : int32_t
    {                                                    
        get_source_name =                0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_target_name =                0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_target_preferred_mode =      0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_adapter_name =               0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_target_persistence =         0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_target_base_type =           0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_support_virtual_resolution = 0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_support_virtual_resolution = 0x8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_advanced_color_info =        0x9,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_advanced_color_state =       0xa,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_sdr_white_level =            0xb,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_monitor_specialization =     0xc,              // Windows 11
        set_monitor_specialization =     0xd,              // Windows 11
        force_uint32 =                   0xff,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
