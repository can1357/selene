#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICeeGen]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_cee_gen_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "ICeeGen.$", 0x8, true, 0x63f40aa2cbaaa58c );
        SDK_FIXED_SIZE( i_cee_gen_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_cee_gen_t, 0x8 );
