#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICacheControl]
    // => Windows 10 v1607
    //
    struct i_cache_control_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ICacheControl.$", 0x0, false, 0x6e162e0fed510216 );
        SDK_FIXED_SIZE( i_cache_control_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_cache_control_t, 0x8 );
