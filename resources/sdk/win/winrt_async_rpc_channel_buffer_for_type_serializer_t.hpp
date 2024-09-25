#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winrt_async_rpc_channel_buffer_for_type_serializer_t.start.hpp"
namespace win
{
    class winrt_async_channel_operation_t;

    // [class WinrtAsyncRpcChannelBufferForTypeSerializer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_rpc_channel_buffer_for_type_serializer_t             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 class win::winrt_async_channel_operation_t* channel_operation;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._channelOperation
                                                                           
        SDK_MAGIC_PROPERTIES( "WinrtAsyncRpcChannelBufferForTypeSerializer.$", 0x20, true, 0xaaf0a20e8270c671 );                  
        SDK_FIXED_SIZE( winrt_async_rpc_channel_buffer_for_type_serializer_t, 0x20 );                  
    };                                                                     
};
#include "magic/winrt_async_rpc_channel_buffer_for_type_serializer_t.end.hpp"
SDK_VERIFY( class win::winrt_async_rpc_channel_buffer_for_type_serializer_t, 0x20 );
