#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IContainerIdListenerTestHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_container_id_listener_test_hook_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "IContainerIdListenerTestHook.$", 0x8, true, 0xe47e894a8fb0d986 );
        SDK_FIXED_SIZE( i_container_id_listener_test_hook_t, 0x8 );
    };                                        
};
SDK_VERIFY( struct win::i_container_id_listener_test_hook_t, 0x8 );
