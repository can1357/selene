#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CErrorChannelHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_error_channel_hook_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "CErrorChannelHook.$", 0x8, true, 0x9c4419e242bec739 );
        SDK_FIXED_SIZE( c_error_channel_hook_t, 0x8 );
    };                          
};
SDK_VERIFY( class win::c_error_channel_hook_t, 0x8 );
