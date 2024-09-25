#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMarshalingStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_marshaling_stream_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IMarshalingStream.$", 0x8, true, 0x79befdb8beb6c293 );
        SDK_FIXED_SIZE( i_marshaling_stream_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_marshaling_stream_t, 0x8 );
