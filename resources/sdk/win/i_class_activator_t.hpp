#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClassActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_activator_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IClassActivator.$", 0x8, true, 0x9cc6593756d8e94f );
        SDK_FIXED_SIZE( i_class_activator_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_class_activator_t, 0x8 );
