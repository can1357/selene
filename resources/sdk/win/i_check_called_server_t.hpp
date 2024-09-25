#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICheckCalledServer]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_check_called_server_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "ICheckCalledServer.$", 0x8, true, 0x2ae57a63dd24bdb6 );
        SDK_FIXED_SIZE( i_check_called_server_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_check_called_server_t, 0x8 );
