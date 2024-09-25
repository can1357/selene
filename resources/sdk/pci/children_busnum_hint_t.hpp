#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/children_busnum_hint_t.start.hpp"
namespace pci
{
    // [struct _PCI_CHILDREN_BUSNUM_HINT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct children_busnum_hint_t                          
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint8_t  secondary;                             //{ +0x0000    +0x0000    +0x0000    } | .Secondary
        _m01 uint8_t  subordinate;                           //{ +0x0001    +0x0001    +0x0001    } | .Subordinate
        _m02 uint8_t  spread_resource;                       //{ +0x0002    +0x0002    +0x0002    } | .SpreadResource
        _m03 uint8_t  minimum_bus_numbers_needed;            //{ +0x0003    +0x0003    +0x0003    } | .MinimumBusNumbersNeeded
        _m04 uint32_t bus_numbers_for_non_hotplug_children;  //{ +0x0004    +0x0004    +0x0004    } | .BusNumbersForNonHotplugChildren
        _m05 uint32_t children_bridge_count;                 //{ +0x0008    +0x0008    +0x0008    } | .ChildrenBridgeCount
        _m06 uint32_t direct_hotplug_children_count;         //{ +0x000c    +0x000c    +0x000c    } | .DirectHotplugChildrenCount
        _m07 uint32_t descendent_hotplug_port_count;         //{ +0x0010    +0x0010    +0x0010    } | .DescendentHotplugPortCount
                                                           
        SDK_MAGIC_PROPERTIES( "_PCI_CHILDREN_BUSNUM_HINT.$", 0x14, true, 0x52569f1fc2499172 );                                     
        SDK_FIXED_SIZE( children_busnum_hint_t, 0x14 );                                     
    };                                                     
};
#include "magic/children_busnum_hint_t.end.hpp"
SDK_VERIFY( struct pci::children_busnum_hint_t, 0x14 );
