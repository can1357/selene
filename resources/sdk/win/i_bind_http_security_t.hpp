#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindHttpSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_http_security_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IBindHttpSecurity.$", 0x8, true, 0x7a29da6066f81029 );
        SDK_FIXED_SIZE( i_bind_http_security_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_bind_http_security_t, 0x8 );
