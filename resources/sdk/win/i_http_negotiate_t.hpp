#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHttpNegotiate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_http_negotiate_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IHttpNegotiate.$", 0x8, true, 0x6997b62ea5b849e7 );
        SDK_FIXED_SIZE( i_http_negotiate_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_http_negotiate_t, 0x8 );
