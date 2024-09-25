#pragma once
#include <sdkgen/support_library.hpp>
#include "slot_number_t.hpp"
#include "../nt/kevent_t.hpp"
#include "children_busnum_hint_t.hpp"
#include "bridge_window_requirement_t.hpp"

#include "magic/bridge_requirement_hint_t.start.hpp"
namespace pci
{
    struct bridge_requirement_hint_t;

    // [struct _PCI_BRIDGE_REQUIREMENT_HINT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bridge_requirement_hint_t                                        
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m00 nt::list_entry_t                        link;                    //{ +0x0000    +0x0000    +0x0000    } | .Link
        _m01 nt::list_entry_t                        child_list_head;         //{ +0x0010    +0x0010    +0x0010    } | .ChildListHead
        _m02 struct pci::bridge_requirement_hint_t*  parent;                  //{ +0x0020    +0x0020    +0x0020    } | .Parent
        _m03 struct nt::kevent_t                     lock;                    //{ +0x0028    +0x0028    +0x0028    } | .Lock
        _m04 struct pci::slot_number_t               slot;                    //{ +0x0040    +0x0040    +0x0040    } | .Slot
        _m05 struct pci::children_busnum_hint_t      child_bus_num_hint;      //{ +0x0044    +0x0044    +0x0044    } | .ChildBusNumHint
        _m06 uint64_t                                mem_bar_size;            //{ +0x0058    +0x0058    +0x0058    } | .MemBarSize
        _m07 uint64_t                                prefetch_bar_size;       //{ +0x0060    +0x0060    +0x0060    } | .PrefetchBarSize
        _m08 struct pci::bridge_window_requirement_t memory_window;           //{ +0x0068    +0x0068    +0x0068    } | .MemoryWindow
        _m09 struct pci::bridge_window_requirement_t prefetch_window;         //{ +0x0088    +0x0088    +0x0088    } | .PrefetchWindow
        _m10 struct pci::bridge_window_requirement_t io_window;               //{ +0x00a8    +0x00a8    +0x00a8    } | .IoWindow
        _m11 struct pci::bridge_window_requirement_t memory_window_spread;    //{ +0x00c8    +0x00c8    +0x00c8    } | .MemoryWindowSpread
        _m12 struct pci::bridge_window_requirement_t prefetch_window_spread;  //{ +0x00e8    +0x00e8    +0x00e8    } | .PrefetchWindowSpread
                                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE_REQUIREMENT_HINT.$", 0x108, true, 0x1673252be4ac4a39 );                       
        SDK_FIXED_SIZE( bridge_requirement_hint_t, 0x108 );                       
    };                                                                      
};
#include "magic/bridge_requirement_hint_t.end.hpp"
SDK_VERIFY( struct pci::bridge_requirement_hint_t, 0x108 );
