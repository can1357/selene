#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class WinrtAsyncProxyMethodInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_proxy_method_info_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "WinrtAsyncProxyMethodInfo.$", 0x90, true, 0x38fb3c88c349f651 );
        SDK_FIXED_SIZE( winrt_async_proxy_method_info_t, 0x90 );
    };                                   
};
SDK_VERIFY( class win::winrt_async_proxy_method_info_t, 0x90 );
