#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISystemDebugEventFire]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_system_debug_event_fire_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "ISystemDebugEventFire.$", 0x8, true, 0x77762174099c0dd4 );
        SDK_FIXED_SIZE( i_system_debug_event_fire_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_system_debug_event_fire_t, 0x8 );
