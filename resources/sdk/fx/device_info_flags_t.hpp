#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDeviceInfoFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_info_flags_t : uint16_t           
    {                                                   
        line_based_level_triggered_interrupt = 0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        line_based_edge_triggered_interrupt =  0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msi_x_or_single_msi22_interrupt =      0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msi22_multi_message_interrupt =        0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passive_level_interrupt =              0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_bus_master =                       0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_system =                           0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_system_duplex =                    0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_static_children =                  0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_dynamic_children =                 0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_using_driver_wpp_recorder =         0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
