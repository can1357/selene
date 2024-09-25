#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_call_retry_context_t.start.hpp"
namespace win
{
    // [class ClientCallRetryContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class client_call_retry_context_t                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t c_auto_retries;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cAutoRetries
        _m01 uint32_t c_last_auto_retry_wait_in100ns;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._cLastAutoRetryWaitIn100ns
        _m02 uint32_t c_max_auto_retry_wait_in100ns;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cMaxAutoRetryWaitIn100ns
        _m03 uint32_t c_total_auto_retry_wait_in100ns;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cTotalAutoRetryWaitIn100ns
                                                      
        SDK_MAGIC_PROPERTIES( "ClientCallRetryContext.$", 0x10, true, 0x63f07c1ad734b9b7 );                                
        SDK_FIXED_SIZE( client_call_retry_context_t, 0x10 );                                
    };                                                
};
#include "magic/client_call_retry_context_t.end.hpp"
SDK_VERIFY( class win::client_call_retry_context_t, 0x10 );
