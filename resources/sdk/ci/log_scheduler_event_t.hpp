#pragma once
#include <sdkgen/support_library.hpp>
#include "../etwi/header_t.hpp"

#include "magic/log_scheduler_event_t.start.hpp"
namespace ci
{
    // [struct _CI_LOG_SCHEDULER_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_scheduler_event_t              
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                    
        _m00 struct etwi::header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t              process_id;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProcessId
        _m02 uint32_t              thread_id;   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ThreadId
        _m03 uint32_t              priority;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Priority
        _m04 uint32_t              task_index;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TaskIndex
                                              
        SDK_MAGIC_PROPERTIES( "_CI_LOG_SCHEDULER_EVENT.$", 0x40, true, 0xa0a91a559e350a5 );           
        SDK_FIXED_SIZE( log_scheduler_event_t, 0x40 );           
    };                                        
};
#include "magic/log_scheduler_event_t.end.hpp"
SDK_VERIFY( struct ci::log_scheduler_event_t, 0x40 );
