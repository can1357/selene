#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_ASPM_SUPPORT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_aspm_support_t : int32_t
    {                                          
        no_aspm_support =          0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_entry_support =        0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l1_entry_support =         0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        l0s_and_l1_entry_support = 0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
