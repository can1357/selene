#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISynchronizeHandle]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_synchronize_handle_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ISynchronizeHandle.$", 0x8, true, 0xfcc8e2de3c3fcbbf );
        SDK_FIXED_SIZE( i_synchronize_handle_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_synchronize_handle_t, 0x8 );
