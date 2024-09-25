#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class RestrictedErrorChainEnumerator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class restricted_error_chain_enumerator_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "RestrictedErrorChainEnumerator.$", 0x10, true, 0xbad1de04a2aa14fd );
        SDK_FIXED_SIZE( restricted_error_chain_enumerator_t, 0x10 );
    };                                       
};
SDK_VERIFY( class win::restricted_error_chain_enumerator_t, 0x10 );
