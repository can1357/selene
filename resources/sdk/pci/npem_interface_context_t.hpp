#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/npem_interface_context_t.start.hpp"
namespace pci
{
    struct npem_control_t;

    // [struct _PCI_NPEM_INTERFACE_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct npem_interface_context_t                   
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint8_t                     npem_enabled;  //{ +0x0000    +0x0000    +0x0000    } | .NpemEnabled
        _m01 struct pci::npem_control_t* npem_control;  //{ +0x0008    +0x0008    +0x0008    } | .NpemControl
                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_NPEM_INTERFACE_CONTEXT.$", 0x10, true, 0x8dcbfd049ffd3bd2 );             
        SDK_FIXED_SIZE( npem_interface_context_t, 0x10 );             
    };                                                
};
#include "magic/npem_interface_context_t.end.hpp"
SDK_VERIFY( struct pci::npem_interface_context_t, 0x10 );
