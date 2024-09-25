#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

namespace mm { struct page_access_info_header_t; }

#include "magic/access_log_state_t.start.hpp"
namespace mi
{
    // [struct _MI_ACCESS_LOG_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct access_log_state_t                                                      
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 struct mm::page_access_info_header_t volatile* cc_access_log;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CcAccessLog
        _m01 struct nt::work_queue_item_t                   disable_access_logging;  //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .DisableAccessLogging
        _m02 uint32_t                                       enabled;                 //{ +0x0008    +0x0028    +0x0028    +0x0028    } | .Enabled
        _m03 uint32_t                                       min_logging_priority;    //{ +0x0030    +0x002c    +0x002c    +0x002c    } | .MinLoggingPriority
        _m04 uint64_t                                       access_logging_lock;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AccessLoggingLock
                                                                                   
        SDK_MAGIC_PROPERTIES( "_MI_ACCESS_LOG_STATE.$", 0x80, true, 0xdb8a013a2ae808a6 );                       
        SDK_FIXED_SIZE( access_log_state_t, 0x80 );                                
    };                                                                             
};
#include "magic/access_log_state_t.end.hpp"
SDK_VERIFY( struct mi::access_log_state_t, 0x80 );
