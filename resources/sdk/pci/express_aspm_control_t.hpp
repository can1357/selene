#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_ASPM_CONTROL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_aspm_control_t : int32_t
    {                                          
        l0s_and_l1_entry_disabled = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_entry_enabled =         0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_entry_enabled =          0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_and_l1_entry_enabled =  0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
