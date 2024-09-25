#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winrt_async_server_call_t.start.hpp"
namespace win
{
    struct i_stub_call_t;

    // [class WinrtAsyncServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_server_call_t                                 
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m00 struct win::i_stub_call_t const* async_proxy_stub_call;  //{ +0x0098    +0x00e0    +0x0148    +0x00e0    } | ._asyncProxyStubCall
                                                                    
        SDK_MAGIC_PROPERTIES( "WinrtAsyncServerCall.$", 0x100, true, 0xa3618ad114d2b077 );                      
        SDK_DYNAMIC_SIZE( winrt_async_server_call_t );                      
    };                                                              
};
#include "magic/winrt_async_server_call_t.end.hpp"
