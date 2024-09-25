#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_event_collector_endpoint_association_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY]
    // => Windows 11
    //
    struct express_event_collector_endpoint_association_capability_t             
    {                                                                            
        // Windows 11                                                            
        //                                                                       
        _m00 struct pci::express_enhanced_capability_header_t header;              //{ +0x0000    } | .Header
        _m01 uint32_t                                         association_bitmap;  //{ +0x0004    } | .AssociationBitmap
                                                                                 
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY.$", 0x0, false, 0x851041ebbbb54fc7 );                   
        SDK_FIXED_SIZE( express_event_collector_endpoint_association_capability_t, 0x8 );                   
    };                                                                           
};
#include "magic/express_event_collector_endpoint_association_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_event_collector_endpoint_association_capability_t, 0x8 );
