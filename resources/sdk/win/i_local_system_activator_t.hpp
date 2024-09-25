#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILocalSystemActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_local_system_activator_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "ILocalSystemActivator.$", 0x8, true, 0xa5e1af7aeb0d333 );
        SDK_FIXED_SIZE( i_local_system_activator_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_local_system_activator_t, 0x8 );
