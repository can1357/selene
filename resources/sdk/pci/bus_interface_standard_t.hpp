#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bus_interface_standard_t.start.hpp"
namespace pci
{
    struct common_config_t;
    struct root_bus_hardware_capability_t;

    // [struct _PCI_BUS_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bus_interface_standard_t                                         
    {                                                                       
        using ppci_read_write_config_t =   sdk::function<uint32_t(void*, uint32_t, uint32_t, void*, uint32_t, uint32_t)>*;                          
        using ppci_read_write_config_t =   sdk::function<uint32_t(void*, uint32_t, uint32_t, void*, uint32_t, uint32_t)>*;                          
        using ppci_pin_to_line_t =         sdk::function<void(void*, struct pci::common_config_t*)>*;                          
        using ppci_line_to_pin_t =         sdk::function<void(void*, struct pci::common_config_t*, struct pci::common_config_t*)>*;                          
        using ppci_root_bus_capability_t = sdk::function<void(void*, struct pci::root_bus_hardware_capability_t*)>*;                          
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 uint16_t                             size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                             version;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                context;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*          interface_reference;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*          interface_dereference;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ppci_read_write_config_t             read_config;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ReadConfig
        _m06 ppci_read_write_config_t             write_config;               //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .WriteConfig
        _m07 ppci_pin_to_line_t                   pin_to_line;                //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PinToLine
        _m08 ppci_line_to_pin_t                   line_to_pin;                //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .LineToPin
        _m09 ppci_root_bus_capability_t           root_bus_capability;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .RootBusCapability
        _m10 sdk::function<void(void*, uint8_t)>* express_wake_control;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ExpressWakeControl
        _m11 sdk::function<void(void*)>*          prepare_multistage_resume;  //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .PrepareMultistageResume
                                                                            
        SDK_NONVOL_PROPERTIES( "_PCI_BUS_INTERFACE_STANDARD.$", 0x58, true, 0xcd0f42deb9d49bae );                          
        SDK_FIXED_SIZE( bus_interface_standard_t, 0x58 );                          
    };                                                                      
};
#include "magic/bus_interface_standard_t.end.hpp"
SDK_VERIFY( struct pci::bus_interface_standard_t, 0x58 );
