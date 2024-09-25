#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHttpSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_http_security_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IHttpSecurity.$", 0x8, true, 0x837a5c4ffc56a976 );
        SDK_FIXED_SIZE( i_http_security_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_http_security_t, 0x8 );
