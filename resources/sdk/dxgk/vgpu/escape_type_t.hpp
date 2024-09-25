#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::vgpu
{
    // [enum _DXGKVGPU_ESCAPE_TYPE]
    //  WDK 10
    //
    enum class escape_type_t : int32_t   
    {                                    
        read_pci_config =         0x0,     // WDK 10
        write_pci_config =        0x1,     // WDK 10
        initialize =              0x2,     // WDK 10
        release =                 0x3,     // WDK 10
        get_vgpu_type =           0x4,     // WDK 10
        powertransitioncomplete = 0x5,     // WDK 10
    };                                   
};
