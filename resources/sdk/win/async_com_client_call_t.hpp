#pragma once
#include <sdkgen/support_library.hpp>
#include "async_client_call_retry_context_t.hpp"

#include "magic/async_com_client_call_t.start.hpp"
namespace win
{
    // [class AsyncComClientCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_com_client_call_t                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                              
        _m00 class win::async_client_call_retry_context_t retry_context;  //{ +0x00a0    +0x00f0    +0x00f0    +0x00f0    } | ._retryContext
        _m01 sdk::hresult                                 hr_send;        //{ +0x00e8    +0x0140    +0x0140    +0x0140    } | ._hrSend
                                                                        
        SDK_MAGIC_PROPERTIES( "AsyncComClientCall.$", 0x158, true, 0xa328cf932e7385c1 );              
        SDK_DYNAMIC_SIZE( async_com_client_call_t );                    
    };                                                                  
};
#include "magic/async_com_client_call_t.end.hpp"
