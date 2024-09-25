#pragma once
#include <sdkgen/support_library.hpp>

namespace tp { struct timer_t; }

#include "magic/async_client_call_retry_context_t.start.hpp"
namespace win
{
    // [class AsyncClientCallRetryContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_client_call_retry_context_t                      
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                       
        _m00 uint32_t            c_auto_retries;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cAutoRetries
        _m01 uint32_t            c_last_auto_retry_wait_in100ns;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._cLastAutoRetryWaitIn100ns
        _m02 uint32_t            c_max_auto_retry_wait_in100ns;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cMaxAutoRetryWaitIn100ns
        _m03 uint32_t            c_total_auto_retry_wait_in100ns;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cTotalAutoRetryWaitIn100ns
        _m04 struct tp::timer_t* p_timer;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pTimer
        _m05 bool                is_cancellation_requested;        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._isCancellationRequested
        _m06 bool                allow_final_retry_attempt;        //{ +0x0035    +0x0035    +0x0035    +0x0035    } | ._allowFinalRetryAttempt
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                       
        _m07 uint32_t            retry_count;                      //{ +0x0048    +0x0048    +0x0048    } | ._retryCount
                                                                 
        SDK_MAGIC_PROPERTIES( "AsyncClientCallRetryContext.$", 0x50, true, 0x9833a532be7b349c );                                
        SDK_DYNAMIC_SIZE( async_client_call_retry_context_t );                                
    };                                                           
};
#include "magic/async_client_call_retry_context_t.end.hpp"
