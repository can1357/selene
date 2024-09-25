#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExternalConnection]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_external_connection_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IExternalConnection.$", 0x8, true, 0xdde9b2035fc58a24 );
        SDK_FIXED_SIZE( i_external_connection_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_external_connection_t, 0x8 );
