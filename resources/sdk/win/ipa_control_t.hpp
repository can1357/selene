#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPAControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipa_control_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IPAControl.$", 0x8, true, 0x70fe47d90fe0a7dd );
        SDK_FIXED_SIZE( ipa_control_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::ipa_control_t, 0x8 );
