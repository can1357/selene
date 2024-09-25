#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_ENERGY_COMPONENT_TYPE_NUM]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_energy_component_type_num_t : int32_t
    {                                                       
        cpu =                  0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        storage =              0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        network =              0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mbb =                  0x3,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        foreground_time =      0x4,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        desktop_visible_time = 0x5,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        window_resource =      0x6,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compositor_resource =  0x7,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                0x8,                           // Windows 10 v1607
        tracking_state =       0x8,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        input =                0x9,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio_in =             0xa,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio_out =            0xb,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_required =     0xc,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        keyboard_input =       0xd,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mouse_input =          0xe,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                  0xf,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
