#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_DSM_IGNORE_BOOT_CONFIG_STATE]
    //  Windows 11
    //
    enum class dsm_ignore_boot_config_state_t : int32_t
    {                                                  
        unspecified =      0x0,                          // Windows 11
        ok =               0x1,                          // Windows 11
        ok_inherited =     0x2,                          // Windows 11
        not_ok =           0x3,                          // Windows 11
        not_ok_inherited = 0x4,                          // Windows 11
    };                                                 
};
