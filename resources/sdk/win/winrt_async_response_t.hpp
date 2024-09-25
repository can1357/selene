#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winrt_async_response_t.start.hpp"
namespace win
{
    // [class WinrtAsyncResponse]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_response_t       
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                             
        _m00 void const* bucket_assist;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._bucketAssist
                                       
        SDK_MAGIC_PROPERTIES( "WinrtAsyncResponse.$", 0x58, true, 0x179d0b18272c8f61 );              
        SDK_FIXED_SIZE( winrt_async_response_t, 0x58 );              
    };                                 
};
#include "magic/winrt_async_response_t.end.hpp"
SDK_VERIFY( class win::winrt_async_response_t, 0x58 );
