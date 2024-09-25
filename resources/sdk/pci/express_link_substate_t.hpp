#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_LINK_SUBSTATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_link_substate_t : int32_t     
    {                                                
        pci_pm_link_sub_state_l11_bit_index = 0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pci_pm_link_sub_state_l12_bit_index = 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aspm_link_sub_state_l11_bit_index =   0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aspm_link_sub_state_l12_bit_index =   0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
