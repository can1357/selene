#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStubManagerDisconnect]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_stub_manager_disconnect_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IStubManagerDisconnect.$", 0x8, true, 0xbf62339dda674026 );
        SDK_FIXED_SIZE( i_stub_manager_disconnect_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_stub_manager_disconnect_t, 0x8 );
