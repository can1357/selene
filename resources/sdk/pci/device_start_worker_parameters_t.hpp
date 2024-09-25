#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }
namespace nt { struct irp_t;           }

#include "magic/device_start_worker_parameters_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEVICE_START_WORKER_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_start_worker_parameters_t                   
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct nt::irp_t*           irp;                   //{ +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 struct cm::resource_list_t* resources;             //{ +0x0008    +0x0008    +0x0008    } | .Resources
        _m02 struct cm::resource_list_t* resources_translated;  //{ +0x0010    +0x0010    +0x0010    } | .ResourcesTranslated
        _m03 uint8_t                     complete;              //{ +0x0018    +0x0018    +0x0018    } | .Complete
                                                              
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_START_WORKER_PARAMETERS.$", 0x20, true, 0x997b395e34b0a1b7 );                     
        SDK_FIXED_SIZE( device_start_worker_parameters_t, 0x20 );                     
    };                                                        
};
#include "magic/device_start_worker_parameters_t.end.hpp"
SDK_VERIFY( struct pci::device_start_worker_parameters_t, 0x20 );
