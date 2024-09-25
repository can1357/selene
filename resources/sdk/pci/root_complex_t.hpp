#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/root_complex_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct express_port_t;
    struct express_bridge_t;

    // [struct _ROOT_COMPLEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct root_complex_t                                           
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                          
        _m00 struct pci::bus_t*            pci_root_bus;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PciRootBus
        _m01 struct pci::express_port_t*   integrated_endpoint_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IntegratedEndpointList
        _m02 struct pci::express_port_t*   event_collector_list;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EventCollectorList
        _m03 struct pci::express_bridge_t* root_port_list;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RootPortList
        _m04 struct nt::kevent_t           list_lock;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ListLock
                                                                    
        SDK_MAGIC_PROPERTIES( "_ROOT_COMPLEX.$", 0x38, true, 0x536f62e4b2f481dd );                         
        SDK_FIXED_SIZE( root_complex_t, 0x38 );                         
    };                                                              
};
#include "magic/root_complex_t.end.hpp"
SDK_VERIFY( struct pci::root_complex_t, 0x38 );
