#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISystemActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_system_activator_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ISystemActivator.$", 0x8, true, 0xe0567e243334c3b6 );
        SDK_FIXED_SIZE( i_system_activator_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_system_activator_t, 0x8 );
