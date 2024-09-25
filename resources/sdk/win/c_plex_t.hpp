#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CPlex]
    // => Windows 10 v1607
    //
    struct c_plex_t
    {              
                   
        SDK_MAGIC_PROPERTIES( "CPlex.$", 0x0, false, 0x6e62ca04548d84ec );
        SDK_FIXED_SIZE( c_plex_t, 0x0 );
    };             
};
SDK_VERIFY( struct win::c_plex_t, 0x0 );
