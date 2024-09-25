#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"
#include "express_link_status_register_t.hpp"
#include "express_root_status_register_t.hpp"
#include "express_slot_status_register_t.hpp"
#include "express_capabilities_register_t.hpp"
#include "express_link_control_register_t.hpp"
#include "express_root_control_register_t.hpp"
#include "express_slot_control_register_t.hpp"
#include "express_device_status_register_t.hpp"
#include "express_device_control_register_t.hpp"
#include "express_device_status_2_register_t.hpp"
#include "express_device_control_2_register_t.hpp"
#include "express_link_capabilities_register_t.hpp"
#include "express_root_capabilities_register_t.hpp"
#include "express_slot_capabilities_register_t.hpp"
#include "express_device_capabilities_register_t.hpp"
#include "express_device_capabilities_2_register_t.hpp"

#include "magic/express_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_capability_t                                                   
    {                                                                             
        using device_capabilities_t =  union pci::express_device_capabilities_register_t;                     
        using device_capabilities2_t = union pci::express_device_capabilities_2_register_t;                     
                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                        
        _m00 struct pci::capabilities_header_t               header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_capabilities_register_t      express_capabilities;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ExpressCapabilities
        _m02 device_capabilities_t                           device_capabilities;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceCapabilities
        _m03 union pci::express_device_control_register_t    device_control;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceControl
        _m04 union pci::express_device_status_register_t     device_status;         //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .DeviceStatus
        _m05 union pci::express_link_capabilities_register_t link_capabilities;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .LinkCapabilities
        _m06 union pci::express_link_control_register_t      link_control;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LinkControl
        _m07 union pci::express_link_status_register_t       link_status;           //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .LinkStatus
        _m08 union pci::express_slot_capabilities_register_t slot_capabilities;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SlotCapabilities
        _m09 union pci::express_slot_control_register_t      slot_control;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SlotControl
        _m10 union pci::express_slot_status_register_t       slot_status;           //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .SlotStatus
        _m11 union pci::express_root_control_register_t      root_control;          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .RootControl
        _m12 union pci::express_root_capabilities_register_t root_capabilities;     //{ +0x001e    +0x001e    +0x001e    +0x001e    +0x001e    } | .RootCapabilities
        _m13 union pci::express_root_status_register_t       root_status;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .RootStatus
        _m14 device_capabilities2_t                          device_capabilities2;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DeviceCapabilities2
        _m15 union pci::express_device_control_2_register_t  device_control2;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceControl2
        _m16 union pci::express_device_status_2_register_t   device_status2;        //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .DeviceStatus2
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_CAPABILITY.$", 0x2c, true, 0xb32e4d2d546e9d98 );                     
        SDK_FIXED_SIZE( express_capability_t, 0x2c );                             
    };                                                                            
};
#include "magic/express_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_capability_t, 0x2c );
