#pragma once
#include <sdkgen/support_library.hpp>
#include "cached_call_event_t.hpp"

#include "magic/c_sync_client_call_t.start.hpp"
namespace win
{
    // [class CSyncClientCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_sync_client_call_t                                                         
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                             
        _m00 const class win::cached_call_event_t event_client_signal;                   //{ +0x00a0    +0x00f0    +0x00f0    +0x00f0    } | ._eventClientSignal
        _m01 uint1_t                              b_winrt_async_method;                  //{ +0x00b0@0  +0x0100@0  +0x0100@0  +0x0100@0  } | ._bWinrtAsyncMethod
        _m02 uint1_t                              b_uses_thread_local_dispatch;          //{ +0x00b0@1  +0x0100@1  +0x0100@1  +0x0100@1  } | ._bUsesThreadLocalDispatch
        _m03 uint1_t                              b_pushed_in_call_table;                //{ +0x00b0@2  +0x0100@3  +0x0100@3  +0x0100@3  } | ._bPushedInCallTable
        _m04 uint1_t                              b_dont_support_co_get_cancel_object;   //{ +0x00b0@3  +0x0100@4  +0x0100@4  +0x0100@4  } | ._bDontSupportCoGetCancelObject
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                             
        _m05 uint1_t                              target_is_rundown_object_of_interest;  //{ +0x0100@2  +0x0100@2  +0x0100@2  } | ._targetIsRundownObjectOfInterest
        _m06 uint32_t                             retry_count;                           //{ +0x0104    +0x0104    +0x0104    } | ._retryCount
                                                                                       
        SDK_MAGIC_PROPERTIES( "CSyncClientCall.$", 0x118, true, 0xacb7f6a875e40aeb );                                     
        SDK_DYNAMIC_SIZE( c_sync_client_call_t );                                      
    };                                                                                 
};
#include "magic/c_sync_client_call_t.end.hpp"
