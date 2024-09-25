#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/security_interface2_t.start.hpp"
namespace pci
{
    // [struct _PCI_SECURITY_INTERFACE2]
    // => Windows 11
    //
    struct security_interface2_t                                        
    {                                                                   
        using set_access_control_services_t = sdk::function<int32_t(void*, uint32_t, uint32_t)>*;                            
                                                                        
        // Windows 11                                                   
        //                                                              
        _m00 uint16_t                       size;                         //{ +0x0000    } | .Size
        _m01 uint16_t                       version;                      //{ +0x0002    } | .Version
        _m02 void*                          context;                      //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*    interface_reference;          //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*    interface_dereference;        //{ +0x0018    } | .InterfaceDereference
        _m05 uint32_t                       flags;                        //{ +0x0020    } | .Flags
        _m06 uint32_t                       supported_scenarios;          //{ +0x0024    } | .SupportedScenarios
        _m07 set_access_control_services_t  set_access_control_services;  //{ +0x0028    } | .SetAccessControlServices
                                                                        
        SDK_MAGIC_PROPERTIES( "_PCI_SECURITY_INTERFACE2.$", 0x0, false, 0x30f2f37880b35de0 );                            
        SDK_FIXED_SIZE( security_interface2_t, 0x30 );                            
    };                                                                  
};
#include "magic/security_interface2_t.end.hpp"
SDK_VERIFY( struct pci::security_interface2_t, 0x30 );
