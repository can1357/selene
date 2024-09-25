#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CDebugChannelHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_debug_channel_hook_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "CDebugChannelHook.$", 0x8, true, 0x9a8d3b6b73c9a4d1 );
        SDK_FIXED_SIZE( c_debug_channel_hook_t, 0x8 );
    };                          
};
SDK_VERIFY( class win::c_debug_channel_hook_t, 0x8 );
