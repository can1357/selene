#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_link_quiescent_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_LINK_QUIESCENT_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_link_quiescent_interface_t                                     
    {                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                        
        _m00 uint16_t                       size;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                       version;                                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                          context;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*    interface_reference;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*    interface_dereference;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*)>* pci_express_enter_link_quiescent_mode;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PciExpressEnterLinkQuiescentMode
        _m06 sdk::function<int32_t(void*)>* pci_express_exit_link_quiescent_mode;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .PciExpressExitLinkQuiescentMode
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.$", 0x30, true, 0xc8c064d75b8320f6 );                                      
        SDK_FIXED_SIZE( express_link_quiescent_interface_t, 0x30 );                                      
    };                                                                            
};
#include "magic/express_link_quiescent_interface_t.end.hpp"
SDK_VERIFY( struct pci::express_link_quiescent_interface_t, 0x30 );
