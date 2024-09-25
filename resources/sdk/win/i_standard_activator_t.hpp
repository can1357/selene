#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStandardActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_standard_activator_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IStandardActivator.$", 0x8, true, 0x82b9cda7681e4415 );
        SDK_FIXED_SIZE( i_standard_activator_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_standard_activator_t, 0x8 );
