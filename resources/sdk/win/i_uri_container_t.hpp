#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUriContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_uri_container_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IUriContainer.$", 0x8, true, 0x7d201dda581fdc4e );
        SDK_FIXED_SIZE( i_uri_container_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_uri_container_t, 0x8 );
