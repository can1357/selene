#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClientSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_client_security_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IClientSecurity.$", 0x8, true, 0x92f010d2bb272123 );
        SDK_FIXED_SIZE( i_client_security_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_client_security_t, 0x8 );
