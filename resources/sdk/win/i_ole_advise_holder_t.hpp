#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleAdviseHolder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_advise_holder_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IOleAdviseHolder.$", 0x8, true, 0x9d23b31b1468a835 );
        SDK_FIXED_SIZE( i_ole_advise_holder_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_ole_advise_holder_t, 0x8 );
