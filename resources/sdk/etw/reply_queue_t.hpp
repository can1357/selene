#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kqueue_t.hpp"

#include "magic/reply_queue_t.start.hpp"
namespace etw
{
    // [struct _ETW_REPLY_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reply_queue_t                     
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 struct nt::kqueue_t queue;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Queue
        _m01 int32_t             events_lost;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EventsLost
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_REPLY_QUEUE.$", 0x48, true, 0x28f6950fb923f3db );            
        SDK_FIXED_SIZE( reply_queue_t, 0x48 );            
    };                                       
};
#include "magic/reply_queue_t.end.hpp"
SDK_VERIFY( struct etw::reply_queue_t, 0x48 );
