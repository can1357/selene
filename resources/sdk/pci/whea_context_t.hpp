#pragma once
#include <sdkgen/support_library.hpp>
#include "express_device_type_t.hpp"

namespace whea { struct error_source_descriptor_t; }

#include "magic/whea_context_t.start.hpp"
namespace pci
{
    // [struct _PCI_WHEA_CONTEXT]
    // => Windows 11
    //
    struct whea_context_t                                             
    {                                                                 
        // Windows 11                                                 
        //                                                            
        _m00 enum pci::express_device_type_t         type;              //{ +0x0000    } | .Type
        _m01 uint32_t                                whea_initialized;  //{ +0x0004    } | .WheaInitialized
        _m02 void*                                   context;           //{ +0x0008    } | .Context
        _m03 struct whea::error_source_descriptor_t* error_source;      //{ +0x0010    } | .ErrorSource
                                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_WHEA_CONTEXT.$", 0x0, false, 0x9a8244504cccce9d );                 
        SDK_FIXED_SIZE( whea_context_t, 0x18 );                       
    };                                                                
};
#include "magic/whea_context_t.end.hpp"
SDK_VERIFY( struct pci::whea_context_t, 0x18 );
