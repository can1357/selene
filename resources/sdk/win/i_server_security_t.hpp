#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServerSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_server_security_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IServerSecurity.$", 0x8, true, 0x6f8cbff20fa76f09 );
        SDK_FIXED_SIZE( i_server_security_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_server_security_t, 0x8 );
