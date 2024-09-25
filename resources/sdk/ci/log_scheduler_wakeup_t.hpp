#pragma once
#include <sdkgen/support_library.hpp>
#include "../etwi/header_t.hpp"

#include "magic/log_scheduler_wakeup_t.start.hpp"
namespace ci
{
    // [struct _CI_LOG_SCHEDULER_WAKEUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_scheduler_wakeup_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                
        _m00 struct etwi::header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t              reason;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Reason
                                          
        SDK_MAGIC_PROPERTIES( "_CI_LOG_SCHEDULER_WAKEUP.$", 0x38, true, 0xf5d33babc1d4715 );       
        SDK_FIXED_SIZE( log_scheduler_wakeup_t, 0x38 );       
    };                                    
};
#include "magic/log_scheduler_wakeup_t.end.hpp"
SDK_VERIFY( struct ci::log_scheduler_wakeup_t, 0x38 );
