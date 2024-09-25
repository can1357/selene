#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_event_subqueue_t.hpp"
#include "stor_event_queue_node_t.hpp"

#include "magic/stor_event_queue_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EVENT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_event_queue_t                          
    {                                                  
        using processor_queues_t = sdk::array<struct stor::port::stor_event_subqueue_t, 1>;                      
        using queues_t =           sdk::array<struct stor::port::stor_event_queue_node_t, 1>;                      
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                             
        _m00 uint1_t             sorted_queue_enabled;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SortedQueueEnabled
        _m01 uint1_t             qos_mode_enabled;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .QosModeEnabled
        _m02 uint1_t             abort_supported;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AbortSupported
        _m03 uint32_t            flags;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m04 uint32_t            time_per_tick;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimePerTick
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                             
        _m05 uint32_t            processor_queue_count;  //{ +0x0008    +0x0008    +0x0008    } | .ProcessorQueueCount
        _m06 processor_queues_t  processor_queues;       //{ +0x0040    +0x0040    +0x0040    } | .ProcessorQueues
                                                       
        // Windows 10 v1607                            
        //                                             
        _m07 queues_t            queues;                 //{ +0x0040    } | .Queues
                                                       
        SDK_MAGIC_PROPERTIES( "_STOR_EVENT_QUEUE.$", 0x80, true, 0x672cadea7420fb80 );                      
        SDK_FIXED_SIZE( stor_event_queue_t, 0x80 );                      
    };                                                 
};
#include "magic/stor_event_queue_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_event_queue_t, 0x80 );
