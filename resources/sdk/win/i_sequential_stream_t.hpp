#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISequentialStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_sequential_stream_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ISequentialStream.$", 0x8, true, 0xe7ef1fd286c43446 );
        SDK_FIXED_SIZE( i_sequential_stream_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_sequential_stream_t, 0x8 );
