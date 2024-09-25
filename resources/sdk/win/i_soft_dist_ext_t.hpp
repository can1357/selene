#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISoftDistExt]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_soft_dist_ext_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ISoftDistExt.$", 0x8, true, 0x74d56f21a39c90bb );
        SDK_FIXED_SIZE( i_soft_dist_ext_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_soft_dist_ext_t, 0x8 );
