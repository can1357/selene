#pragma once
#include <sdkgen/support_library.hpp>

namespace arbiter { struct test_allocation_parameters_t; }

#include "magic/fpb_fdo_resource_allocation_context_t.start.hpp"
namespace pci
{
    struct fpb_fdo_t;
    struct fpb_fdo_resource_allocation_context_t;

    // [struct _PCI_FPB_FDO_RESOURCE_ALLOCATION_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_fdo_resource_allocation_context_t                            
    {                                                                       
        using previous_context_t = struct pci::fpb_fdo_resource_allocation_context_t*;                 
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m00 previous_context_t                            previous_context;  //{ +0x0000    +0x0000    +0x0000    } | .PreviousContext
        _m01 struct pci::fpb_fdo_t*                        fpb_fdo_node;      //{ +0x0008    +0x0008    +0x0008    } | .FpbFdoNode
        _m02 struct arbiter::test_allocation_parameters_t* parameters;        //{ +0x0010    +0x0010    +0x0010    } | .Parameters
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_FDO_RESOURCE_ALLOCATION_CONTEXT.$", 0x18, true, 0x483cecb135b284ff );                 
        SDK_FIXED_SIZE( fpb_fdo_resource_allocation_context_t, 0x18 );                 
    };                                                                      
};
#include "magic/fpb_fdo_resource_allocation_context_t.end.hpp"
SDK_VERIFY( struct pci::fpb_fdo_resource_allocation_context_t, 0x18 );
