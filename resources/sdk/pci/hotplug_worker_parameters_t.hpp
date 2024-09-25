#pragma once
#include <sdkgen/support_library.hpp>
#include "hotplug_commandtype_t.hpp"

#include "magic/hotplug_worker_parameters_t.start.hpp"
namespace pci
{
    struct hotplug_slot_t;

    // [struct _HOTPLUG_WORKER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hotplug_worker_parameters_t                       
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 struct pci::hotplug_slot_t*     slot;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Slot
        _m01 enum pci::hotplug_commandtype_t type;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m02 uint64_t                        command_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommandContext
                                                             
        SDK_MAGIC_PROPERTIES( "_HOTPLUG_WORKER_PARAMETERS.$", 0x18, true, 0xec217f402266de86 );                
        SDK_FIXED_SIZE( hotplug_worker_parameters_t, 0x18 );                
    };                                                       
};
#include "magic/hotplug_worker_parameters_t.end.hpp"
SDK_VERIFY( struct pci::hotplug_worker_parameters_t, 0x18 );
