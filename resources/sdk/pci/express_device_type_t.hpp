#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_EXPRESS_DEVICE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_device_type_t : int32_t            
    {                                                     
        express_endpoint =                         0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_legacy_endpoint =                  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_root_port =                        0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_upstream_switch_port =             0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_downstream_switch_port =           0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_to_pci_x_bridge =                  0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        x_to_express_bridge =                      0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_root_complex_integrated_endpoint = 0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        express_root_complex_event_collector =     0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
