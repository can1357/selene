#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_event_queue_entry_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EVENT_QUEUE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_event_queue_entry_t             
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 nt::list_entry_t next_link;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextLink
        _m01 nt::list_entry_t sorted_list_entry;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SortedListEntry
        _m02 uint32_t         timeout;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Timeout
        _m03 uint64_t         start_time;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StartTime
        _m04 uint1_t          in_sorted_queue;    //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .InSortedQueue
        _m05 uint32_t         flags;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m06 uint32_t         queue_index;        //{ +0x0024    +0x0024    +0x0024    } | .QueueIndex
                                                
        // Windows 10 v1607                     
        //                                      
        _m07 uint32_t         node;               //{ +0x0024    } | .Node
                                                
        SDK_MAGIC_PROPERTIES( "_STOR_EVENT_QUEUE_ENTRY.$", 0x38, true, 0x494cb57631462f92 );                  
        SDK_FIXED_SIZE( stor_event_queue_entry_t, 0x38 );                  
    };                                          
};
#include "magic/stor_event_queue_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_event_queue_entry_t, 0x38 );
