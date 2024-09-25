#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_present_interface_t.start.hpp"
namespace pci
{
    struct device_presence_parameters_t;

    // [struct _PCI_DEVICE_PRESENT_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_present_interface_t                           
    {                                                           
        using ppci_is_device_present_t =    sdk::function<uint8_t(uint16_t, uint16_t, uint8_t, uint16_t, uint16_t, uint32_t)>*;                      
        using ppci_is_device_present_ex_t = sdk::function<uint8_t(void*, struct pci::device_presence_parameters_t*)>*;                      
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 uint16_t                     size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                     version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                        context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*  interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*  interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ppci_is_device_present_t     is_device_present;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .IsDevicePresent
        _m06 ppci_is_device_present_ex_t  is_device_present_ex;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .IsDevicePresentEx
                                                                
        SDK_NONVOL_PROPERTIES( "_PCI_DEVICE_PRESENT_INTERFACE.$", 0x30, true, 0xc4ab183fc09a0f12 );                      
        SDK_FIXED_SIZE( device_present_interface_t, 0x30 );                      
    };                                                          
};
#include "magic/device_present_interface_t.end.hpp"
SDK_VERIFY( struct pci::device_present_interface_t, 0x30 );
