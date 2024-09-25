#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_event_queue_node_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EVENT_QUEUE_NODE]
    // => Windows 10 v1607
    //
    struct stor_event_queue_node_t            
    {                                         
        // Windows 10 v1607                   
        //                                    
        _m00 nt::list_entry_t  list;            //{ +0x0000    } | .List
        _m01 nt::list_entry_t  sorted_list;     //{ +0x0010    } | .SortedList
        _m02 nt::list_entry_t* search_pointer;  //{ +0x0020    } | .SearchPointer
        _m03 uint64_t          lock;            //{ +0x0028    } | .Lock
        _m04 uint32_t          timeout;         //{ +0x0030    } | .Timeout
                                              
        SDK_MAGIC_PROPERTIES( "_STOR_EVENT_QUEUE_NODE.$", 0x0, false, 0x25861428e55dc878 );               
        SDK_FIXED_SIZE( stor_event_queue_node_t, 0x38 );               
    };                                        
};
#include "magic/stor_event_queue_node_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_event_queue_node_t, 0x38 );
