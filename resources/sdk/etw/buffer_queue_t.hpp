#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/buffer_queue_t.start.hpp"
namespace etw
{
    // [struct _ETW_BUFFER_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct buffer_queue_t                                
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 struct nt::single_list_entry_t* queue_tail;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueueTail
        _m01 struct nt::single_list_entry_t  queue_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueEntry
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_BUFFER_QUEUE.$", 0x10, true, 0x1adff3ab7fcbd666 );            
        SDK_FIXED_SIZE( buffer_queue_t, 0x10 );            
    };                                                   
};
#include "magic/buffer_queue_t.end.hpp"
SDK_VERIFY( struct etw::buffer_queue_t, 0x10 );
