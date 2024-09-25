#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMapToken]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_map_token_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IMapToken.$", 0x8, true, 0x542650caba9e784e );
        SDK_FIXED_SIZE( i_map_token_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_map_token_t, 0x8 );
