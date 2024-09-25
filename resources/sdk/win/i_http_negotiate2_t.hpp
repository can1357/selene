#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHttpNegotiate2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_http_negotiate2_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IHttpNegotiate2.$", 0x8, true, 0x9bb823a354538ffe );
        SDK_FIXED_SIZE( i_http_negotiate2_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_http_negotiate2_t, 0x8 );
