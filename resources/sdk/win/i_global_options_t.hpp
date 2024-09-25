#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGlobalOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_global_options_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IGlobalOptions.$", 0x8, true, 0x7b4318303c055546 );
        SDK_FIXED_SIZE( i_global_options_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_global_options_t, 0x8 );
