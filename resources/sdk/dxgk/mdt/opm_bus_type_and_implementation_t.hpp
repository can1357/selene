#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_BUS_TYPE_AND_IMPLEMENTATION]
    //  WDK 10
    //
    enum class opm_bus_type_and_implementation_t : int32_t                                   
    {                                                                                        
        bus_implementation_modifier_non_standard =                            -0x80000000,     // WDK 10
        copp_compatible_bus_type_integrated =                                 -0x80000000,     // WDK 10
        bus_type_other =                                                      0x0,             // WDK 10
        bus_type_pci =                                                        0x1,             // WDK 10
        bus_type_pcix =                                                       0x2,             // WDK 10
        bus_type_pciexpress =                                                 0x3,             // WDK 10
        bus_type_agp =                                                        0x4,             // WDK 10
        bus_implementation_modifier_inside_of_chipset =                       0x10000,         // WDK 10
        bus_implementation_modifier_tracks_on_mother_board_to_chip =          0x20000,         // WDK 10
        bus_implementation_modifier_tracks_on_mother_board_to_socket =        0x30000,         // WDK 10
        bus_implementation_modifier_daughter_board_connector =                0x40000,         // WDK 10
        bus_implementation_modifier_daughter_board_connector_inside_of_nuae = 0x50000,         // WDK 10
    };                                                                                       
};
