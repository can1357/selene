#pragma once
#include <sdkgen/support_library.hpp>
#include "bridge_window_requirement_t.hpp"

#include "magic/bridge_requirements_t.start.hpp"
namespace pci
{
    // [struct _PCI_BRIDGE_REQUIREMENTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bridge_requirements_t                                            
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m00 struct pci::bridge_window_requirement_t memory_window;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemoryWindow
        _m01 struct pci::bridge_window_requirement_t prefetch_window;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrefetchWindow
        _m02 struct pci::bridge_window_requirement_t io_window;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .IoWindow
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m03 struct pci::bridge_window_requirement_t memory_window_spread;    //{ +0x0060    +0x0060    +0x0060    } | .MemoryWindowSpread
        _m04 struct pci::bridge_window_requirement_t prefetch_window_spread;  //{ +0x0080    +0x0080    +0x0080    } | .PrefetchWindowSpread
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE_REQUIREMENTS.$", 0xa0, true, 0xa2b35fc7e0654687 );                       
        SDK_DYNAMIC_SIZE( bridge_requirements_t );                          
    };                                                                      
};
#include "magic/bridge_requirements_t.end.hpp"
