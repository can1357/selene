#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ComVerifierSettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_verifier_settings_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ComVerifierSettings.$", 0x8, true, 0x2b3e2995cbe9a4c7 );
        SDK_FIXED_SIZE( com_verifier_settings_t, 0x8 );
    };                           
};
SDK_VERIFY( class win::com_verifier_settings_t, 0x8 );
