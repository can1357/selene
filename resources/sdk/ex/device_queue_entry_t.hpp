#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_queue_entry_t.start.hpp"
namespace ex
{
    // [struct _EX_DEVICE_QUEUE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_queue_entry_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                   
        _m00 nt::list_entry_t device_list_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceListEntry
        _m01 uint32_t         sort_key;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SortKey
        _m02 uint8_t          inserted;                        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Inserted
        _m03 uint8_t          state;                           //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .State
        _m04 uint1_t          untagged;                        //{ +0x0016@0  +0x0016@0  +0x0016@0  +0x0016@0  } | .Untagged
        _m05 uint1_t          by_pass_frozen;                  //{ +0x0016@1  +0x0016@1  +0x0016@1  +0x0016@1  } | .ByPassFrozen
        _m06 uint1_t          by_pass_locked;                  //{ +0x0016@2  +0x0016@2  +0x0016@2  +0x0016@2  } | .ByPassLocked
        _m07 uint1_t          by_pass_power_locked;            //{ +0x0016@3  +0x0016@3  +0x0016@3  +0x0016@3  } | .ByPassPowerLocked
        _m08 uint1_t          enqueue_for_io_latency;          //{ +0x0016@4  +0x0016@4  +0x0016@4  +0x0016@4  } | .EnqueueForIoLatency
        _m09 uint1_t          check_for_timeout;               //{ +0x0016@5  +0x0016@5  +0x0016@5  +0x0016@5  } | .CheckForTimeout
                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                   
        _m10 uint1_t          enqueue_for_zone_sequential_io;  //{ +0x0016@6  +0x0016@6  +0x0016@6  } | .EnqueueForZoneSequentialIo
                                                             
        SDK_MAGIC_PROPERTIES( "_EX_DEVICE_QUEUE_ENTRY.$", 0x18, true, 0x92d979553667ffd4 );                               
        SDK_FIXED_SIZE( device_queue_entry_t, 0x18 );                               
    };                                                       
};
#include "magic/device_queue_entry_t.end.hpp"
SDK_VERIFY( struct ex::device_queue_entry_t, 0x18 );
