#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kdevice_queue_entry_t.start.hpp"
namespace nt
{
    // [struct _KDEVICE_QUEUE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kdevice_queue_entry_t                
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 nt::list_entry_t device_list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceListEntry
        _m01 uint32_t         sort_key;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SortKey
        _m02 uint8_t          inserted;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Inserted
                                                
        SDK_NONVOL_PROPERTIES( "_KDEVICE_QUEUE_ENTRY.$", 0x18, true, 0xa4b01e9b2bc35417 );                  
        SDK_FIXED_SIZE( kdevice_queue_entry_t, 0x18 );                  
    };                                          
};
#include "magic/kdevice_queue_entry_t.end.hpp"
SDK_VERIFY( struct nt::kdevice_queue_entry_t, 0x18 );
