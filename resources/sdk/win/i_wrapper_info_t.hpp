#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWrapperInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_wrapper_info_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IWrapperInfo.$", 0x8, true, 0x478a6e1dbb2f4184 );
        SDK_FIXED_SIZE( i_wrapper_info_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_wrapper_info_t, 0x8 );
