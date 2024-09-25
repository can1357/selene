#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/segment_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct segment_t;
    struct bridge_requirements_t;

    // [struct _PCI_SEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct segment_t                                                    
    {                                                                   
        using bridge_requirement_override_t = sdk::array<struct pci::bridge_requirements_t*, 256>;                            
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 struct pci::segment_t*         next;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint16_t                       segment_number;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SegmentNumber
        _m02 struct pci::bus_t*             pci_root_bus_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PciRootBusList
        _m03 struct pci::bus_t*             pci_root_bus_tail;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PciRootBusTail
        _m04 uint8_t                        guessed_root_bus_number;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GuessedRootBusNumber
        _m05 struct rtl::bitmap_t           bus_number_map;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BusNumberMap
        _m06 sdk::array<uint32_t, 8>        bus_number_map_buffer;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BusNumberMapBuffer
                                                                        
        // Windows 10 v1607                                             
        //                                                              
        _m07 bridge_requirement_override_t  bridge_requirement_override;  //{ +0x0058    } | .BridgeRequirementOverride
                                                                        
        SDK_MAGIC_PROPERTIES( "_PCI_SEGMENT.$", 0x58, true, 0xc07fa45aefa0ef3a );                            
        SDK_DYNAMIC_SIZE( segment_t );                                  
    };                                                                  
};
#include "magic/segment_t.end.hpp"
