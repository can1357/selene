#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIRemUnknown2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_rem_unknown2_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "AsyncIRemUnknown2.$", 0x8, true, 0x6e5b978f5693a011 );
        SDK_FIXED_SIZE( async_i_rem_unknown2_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::async_i_rem_unknown2_t, 0x8 );
