#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICodeInstall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_code_install_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "ICodeInstall.$", 0x8, true, 0x49a442758a686f53 );
        SDK_FIXED_SIZE( i_code_install_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_code_install_t, 0x8 );
