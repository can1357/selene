#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIRemUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_rem_unknown_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "AsyncIRemUnknown.$", 0x8, true, 0xd880a272babd30f );
        SDK_FIXED_SIZE( async_i_rem_unknown_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::async_i_rem_unknown_t, 0x8 );
