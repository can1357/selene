#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_event_subqueue_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EVENT_SUBQUEUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_event_subqueue_t              
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 nt::list_entry_t  list;            //{ +0x0000    +0x0000    +0x0000    } | .List
        _m01 nt::list_entry_t  sorted_list;     //{ +0x0010    +0x0010    +0x0010    } | .SortedList
        _m02 nt::list_entry_t* search_pointer;  //{ +0x0020    +0x0020    +0x0020    } | .SearchPointer
        _m03 uint64_t          lock;            //{ +0x0028    +0x0028    +0x0028    } | .Lock
        _m04 uint32_t          timeout;         //{ +0x0030    +0x0030    +0x0030    } | .Timeout
                                              
        SDK_MAGIC_PROPERTIES( "_STOR_EVENT_SUBQUEUE.$", 0x40, true, 0xaa2e9fd0e0cc1efb );               
        SDK_FIXED_SIZE( stor_event_subqueue_t, 0x40 );               
    };                                        
};
#include "magic/stor_event_subqueue_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_event_subqueue_t, 0x40 );
