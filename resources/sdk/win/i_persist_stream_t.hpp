#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPersistStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_persist_stream_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IPersistStream.$", 0x8, true, 0xacfc01450bed92df );
        SDK_FIXED_SIZE( i_persist_stream_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_persist_stream_t, 0x8 );
