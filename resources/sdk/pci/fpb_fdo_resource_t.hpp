#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_arbiter_t.hpp"

namespace cm { struct partial_resource_descriptor_t; }
namespace cm { struct resource_list_t;               }

#include "magic/fpb_fdo_resource_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_FDO_RESOURCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fpb_fdo_resource_t                                                                        
    {                                                                                               
        struct u0_root_t                                                                            
        {                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                      
            _m00 struct pci::fpb_arbiter_t bus_numbers_arbiter;                                       //{ +0x0000    +0x0000    +0x0000    } | .BusNumbersArbiter
                                                                                                    
            SDK_MAGIC_PROPERTIES( "_PCI_FPB_FDO_RESOURCE.Root.$", 0x58, true, 0x4ff5fe384de4e93b );                         
            SDK_FIXED_SIZE( u0_root_t, 0x58 );                                                      
        };                                                                                          
                                                                                                    
        struct u3_node_t                                                                            
        {                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                                      
            _m02 struct cm::partial_resource_descriptor_t* starting_non_memory_resources;             //{ +0x0000    +0x0000    +0x0000    } | .StartingNonMemoryResources
            _m03 uint32_t                                  starting_non_memory_resources_count;       //{ +0x0008    +0x0008    +0x0008    } | .StartingNonMemoryResourcesCount
            _m04 struct cm::resource_list_t*               current_resource_list;                     //{ +0x0010    +0x0010    +0x0010    } | .CurrentResourceList
            _m05 uint32_t                                  current_resource_list_size;                //{ +0x0018    +0x0018    +0x0018    } | .CurrentResourceListSize
                                                                                                    
            SDK_MAGIC_PROPERTIES( "_PCI_FPB_FDO_RESOURCE.Node.$", 0x20, true, 0x79d35caef8d6bc5c );                                         
            SDK_FIXED_SIZE( u3_node_t, 0x20 );                                                      
        };                                                                                          
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m01 u0_root_t                                                                         root;  //{ +0x0000    +0x0000    +0x0000    } | .Root
        _m06 u3_node_t                                                                         node;  //{ +0x0000    +0x0000    +0x0000    } | .Node
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_FDO_RESOURCE.$", 0x58, true, 0x6f0493f0aab41865 );          
        SDK_FIXED_SIZE( fpb_fdo_resource_t, 0x58 );                                                 
    };                                                                                              
};
#include "magic/fpb_fdo_resource_t.end.hpp"
SDK_VERIFY( struct pci::fpb_fdo_resource_t::u0_root_t, 0x58 );
SDK_VERIFY( struct pci::fpb_fdo_resource_t::u3_node_t, 0x20 );
SDK_VERIFY( union pci::fpb_fdo_resource_t, 0x58 );
