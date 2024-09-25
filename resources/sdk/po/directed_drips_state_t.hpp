#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/directed_drips_state_t.start.hpp"
namespace po
{
    // [struct _PO_DIRECTED_DRIPS_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct directed_drips_state_t                 
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 nt::list_entry_t  queue_link;          //{ +0x0000    +0x0000    +0x0000    } | .QueueLink
        _m01 nt::list_entry_t  visited_queue_link;  //{ +0x0010    +0x0010    +0x0010    } | .VisitedQueueLink
        _m02 volatile uint32_t flags;               //{ +0x0020    +0x0020    +0x0020    } | .Flags
        _m03 uint32_t          cached_flags;        //{ +0x0024    +0x0024    +0x0024    } | .CachedFlags
        _m04 uint32_t          device_usage_count;  //{ +0x0028    +0x0028    +0x0028    } | .DeviceUsageCount
        _m05 void*             diagnostic;          //{ +0x0030    +0x0030    +0x0030    } | .Diagnostic
                                                  
        SDK_MAGIC_PROPERTIES( "_PO_DIRECTED_DRIPS_STATE.$", 0x38, true, 0x7dcb14c4f10ee876 );                   
        SDK_FIXED_SIZE( directed_drips_state_t, 0x38 );                   
    };                                            
};
#include "magic/directed_drips_state_t.end.hpp"
SDK_VERIFY( struct po::directed_drips_state_t, 0x38 );
