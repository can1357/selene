#pragma once
#include <sdkgen/support_library.hpp>
#include "../etwi/header_t.hpp"

#include "magic/log_scheduler_sleep_response_t.start.hpp"
namespace ci
{
    // [struct _CI_LOG_SCHEDULER_SLEEP_RESPONSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_scheduler_sleep_response_t 
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                
        _m00 struct etwi::header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                          
        SDK_MAGIC_PROPERTIES( "_CI_LOG_SCHEDULER_SLEEP_RESPONSE.$", 0x30, true, 0x48938fad65a5f7a6 );       
        SDK_FIXED_SIZE( log_scheduler_sleep_response_t, 0x30 );       
    };                                    
};
#include "magic/log_scheduler_sleep_response_t.end.hpp"
SDK_VERIFY( struct ci::log_scheduler_sleep_response_t, 0x30 );
