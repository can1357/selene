#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sync_client_call_retry_context_t.start.hpp"
namespace win
{
    // [class SyncClientCallRetryContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class sync_client_call_retry_context_t                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                
        _m00 uint32_t     c_auto_retries;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cAutoRetries
        _m01 uint32_t     c_last_auto_retry_wait_in100ns;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cLastAutoRetryWaitIn100ns
        _m02 uint32_t     c_max_auto_retry_wait_in100ns;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cMaxAutoRetryWaitIn100ns
        _m03 uint32_t     c_total_auto_retry_wait_in100ns;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._cTotalAutoRetryWaitIn100ns
        _m04 sdk::hresult hr;                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._hr
        _m05 uint64_t     dw_wakeup;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._dwWakeup
        _m06 uint32_t     dw_mill_sec_to_wait;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwMillSecToWait
                                                          
        SDK_MAGIC_PROPERTIES( "SyncClientCallRetryContext.$", 0x30, true, 0x76a818619bae08e0 );                                
        SDK_FIXED_SIZE( sync_client_call_retry_context_t, 0x30 );                                
    };                                                    
};
#include "magic/sync_client_call_retry_context_t.end.hpp"
SDK_VERIFY( class win::sync_client_call_retry_context_t, 0x30 );
