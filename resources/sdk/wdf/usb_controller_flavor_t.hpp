#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _USB_CONTROLLER_FLAVOR]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_controller_flavor_t : int32_t
    {                                           
        usb_hc_generic =      0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ohci_generic =        0x64,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ohci_hydra =          0x65,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ohci_nec =            0x66,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_generic =        0xc8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_piix4 =          0xc9,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_piix3 =          0xca,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich2 =           0xcb,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_reserved204 =    0xcc,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich1 =           0xcd,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich3m =          0xce,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich4 =           0xcf,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich5 =           0xd0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_ich6 =           0xd1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_intel =          0xf9,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via =            0xfa,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via_x01 =        0xfb,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via_x02 =        0xfc,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via_x03 =        0xfd,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via_x04 =        0xfe,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uhci_via_x0e_fifo =   0x108,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_generic =        0x3e8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_nec =            0x7d0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_lucent =         0xbb8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_nvidia_tegra2 =  0xfa0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_nvidia_tegra3 =  0xfa1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ehci_intel_medfield = 0x1389,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
