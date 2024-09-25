#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"

#include "magic/subsystem_ids_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_SUBSYSTEM_IDS_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct subsystem_ids_capability_t                        
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 struct pci::capabilities_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                          sub_vendor_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SubVendorID
        _m02 uint16_t                          sub_system_id;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SubSystemID
                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_SUBSYSTEM_IDS_CAPABILITY.$", 0x8, true, 0x19f2a9fb1351518e );              
        SDK_FIXED_SIZE( subsystem_ids_capability_t, 0x8 );              
    };                                                       
};
#include "magic/subsystem_ids_capability_t.end.hpp"
SDK_VERIFY( struct pci::subsystem_ids_capability_t, 0x8 );
