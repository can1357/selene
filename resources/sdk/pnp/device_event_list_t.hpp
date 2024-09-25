#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kmutant_t.hpp"
#include "../nt/fast_mutex_t.hpp"

#include "magic/device_event_list_t.start.hpp"
namespace pnp
{
    // [struct _PNP_DEVICE_EVENT_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_event_list_t                         
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                             
        _m00 int32_t                 status;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 struct nt::kmutant_t    event_queue_mutex;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventQueueMutex
        _m02 struct nt::fast_mutex_t lock;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Lock
        _m03 nt::list_entry_t        list;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .List
                                                       
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_EVENT_LIST.$", 0x88, true, 0x5c8a04da9f66322c );                  
        SDK_FIXED_SIZE( device_event_list_t, 0x88 );                  
    };                                                 
};
#include "magic/device_event_list_t.end.hpp"
SDK_VERIFY( struct pnp::device_event_list_t, 0x88 );
