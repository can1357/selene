#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHandleHolder]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_handle_holder_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IHandleHolder.$", 0x8, true, 0xcb7499ec299ba092 );
        SDK_FIXED_SIZE( i_handle_holder_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_handle_holder_t, 0x8 );
