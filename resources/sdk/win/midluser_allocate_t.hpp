#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct midluser_allocate_t]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midluser_allocate_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "midluser_allocate_t.$", 0x1, true, 0x3345d810c8afcae2 );
        SDK_FIXED_SIZE( midluser_allocate_t, 0x1 );
    };                        
};
SDK_VERIFY( struct win::midluser_allocate_t, 0x1 );
