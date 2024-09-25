#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_DEVICE_RESET_STATE]
    //  Windows 11
    //
    enum class device_reset_state_t : int32_t 
    {                                         
        no_reset_pending =             0x0,     // Windows 11
        pending_function_level_reset = 0x1,     // Windows 11
        pending_secondary_bus_reset =  0x2,     // Windows 11
        pending_platform_reset =       0x3,     // Windows 11
    };                                        
};
