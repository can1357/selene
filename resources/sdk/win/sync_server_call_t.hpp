#pragma once
#include <sdkgen/support_library.hpp>
#include "sync_stub_call_t.hpp"

#include "magic/sync_server_call_t.start.hpp"
namespace win
{
    // [class SyncServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class sync_server_call_t                                          
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                            
        _m00 uint1_t                     b_winrt_async_method;          //{ +0x00a0@0  +0x00e8@0  +0x0150@0  +0x00e8@0  } | ._bWinrtAsyncMethod
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                            
        _m01 uint1_t                     b_uses_thread_local_dispatch;  //{ +0x00e8@1  +0x0150@1  +0x00e8@1  } | ._bUsesThreadLocalDispatch
                                                                      
        // Windows 11                                                 
        //                                                            
        _m02 class win::sync_stub_call_t stub_call;                     //{ +0x0158    } | ._stubCall
                                                                      
        SDK_MAGIC_PROPERTIES( "SyncServerCall.$", 0x100, true, 0xb98de6a563da48a4 );                             
        SDK_DYNAMIC_SIZE( sync_server_call_t );                             
    };                                                                
};
#include "magic/sync_server_call_t.end.hpp"
