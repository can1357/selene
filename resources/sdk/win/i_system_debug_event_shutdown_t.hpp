#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISystemDebugEventShutdown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_system_debug_event_shutdown_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "ISystemDebugEventShutdown.$", 0x8, true, 0x9f24cc1705466d80 );
        SDK_FIXED_SIZE( i_system_debug_event_shutdown_t, 0x8 );
    };                                    
};
SDK_VERIFY( struct win::i_system_debug_event_shutdown_t, 0x8 );
