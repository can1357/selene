#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHttpNegotiate3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_http_negotiate3_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IHttpNegotiate3.$", 0x8, true, 0x8db2ceca7db896d3 );
        SDK_FIXED_SIZE( i_http_negotiate3_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_http_negotiate3_t, 0x8 );
