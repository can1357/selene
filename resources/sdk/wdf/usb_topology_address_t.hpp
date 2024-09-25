#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_topology_address_t.start.hpp"
namespace wdf
{
    // [struct _USB_TOPOLOGY_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_topology_address_t                         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                pci_bus_number;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PciBusNumber
        _m01 uint32_t                pci_device_number;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PciDeviceNumber
        _m02 uint32_t                pci_function_number;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PciFunctionNumber
        _m03 uint16_t                root_hub_port_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RootHubPortNumber
        _m04 sdk::array<uint16_t, 5> hub_port_number;       //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .HubPortNumber
                                                          
        SDK_MAGIC_PROPERTIES( "_USB_TOPOLOGY_ADDRESS.$", 0x20, true, 0x7d6295e7b44012ed );                     
        SDK_FIXED_SIZE( usb_topology_address_t, 0x20 );                     
    };                                                    
};
#include "magic/usb_topology_address_t.end.hpp"
SDK_VERIFY( struct wdf::usb_topology_address_t, 0x20 );
