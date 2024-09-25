#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/winrt_async_channel_unmarshaler_info_t.start.hpp"
namespace win
{
    // [struct WinrtAsyncChannelUnmarshalerInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct winrt_async_channel_unmarshaler_info_t 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 struct nt::guid_t async_operation_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .asyncOperationId
                                                  
        SDK_MAGIC_PROPERTIES( "WinrtAsyncChannelUnmarshalerInfo.$", 0x10, true, 0x35880c4422e55357 );                   
        SDK_FIXED_SIZE( winrt_async_channel_unmarshaler_info_t, 0x10 );                   
    };                                            
};
#include "magic/winrt_async_channel_unmarshaler_info_t.end.hpp"
SDK_VERIFY( struct win::winrt_async_channel_unmarshaler_info_t, 0x10 );
