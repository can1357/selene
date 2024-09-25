#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/header_operations_t.start.hpp"
namespace pci
{
    struct device_t;
    union device_resources_t;
    union device_requirements_t;

    // [struct _PCI_HEADER_OPERATIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct header_operations_t                    
    {                                             
        using get_requirements_t = sdk::function<int32_t(struct pci::device_t*, union pci::device_requirements_t*)>*;                 
        using get_resources_t =    sdk::function<int32_t(struct pci::device_t*, union pci::device_resources_t*)>*;                 
        using set_resources_t =    sdk::function<int32_t(struct pci::device_t*, union pci::device_resources_t*)>*;                 
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                        
        _m00 get_requirements_t  get_requirements;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GetRequirements
        _m01 get_resources_t     get_resources;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GetResources
        _m02 set_resources_t     set_resources;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetResources
                                                  
        SDK_MAGIC_PROPERTIES( "_PCI_HEADER_OPERATIONS.$", 0x18, true, 0x6e77ea481b0fcc53 );                 
        SDK_FIXED_SIZE( header_operations_t, 0x18 );                 
    };                                            
};
#include "magic/header_operations_t.end.hpp"
SDK_VERIFY( struct pci::header_operations_t, 0x18 );
