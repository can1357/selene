#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISecurityOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_security_options_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ISecurityOptions.$", 0x8, true, 0x5b74157220f12290 );
        SDK_FIXED_SIZE( i_security_options_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_security_options_t, 0x8 );
