#pragma once
#include <sdkgen/support_library.hpp>
#include "acs_bit_t.hpp"

#include "magic/security_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_SECURITY_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct security_interface_t                                      
    {                                                                
        using ppci_set_acs_t = sdk::function<int32_t(void*, enum pci::acs_bit_t, enum pci::acs_bit_t, enum pci::acs_bit_t, enum pci::acs_bit_t, enum pci::acs_bit_t, enum pci::acs_bit_t, enum pci::acs_bit_t)>*;                            
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                           
        _m00 uint16_t                    size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ppci_set_acs_t              set_access_control_services;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SetAccessControlServices
                                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_SECURITY_INTERFACE.$", 0x28, true, 0x6edad6920cfb01ba );                            
        SDK_FIXED_SIZE( security_interface_t, 0x28 );                            
    };                                                               
};
#include "magic/security_interface_t.end.hpp"
SDK_VERIFY( struct pci::security_interface_t, 0x28 );
