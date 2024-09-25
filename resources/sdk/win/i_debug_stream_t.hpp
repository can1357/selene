#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDebugStream]
    // => Windows 10 v1607
    //
    struct i_debug_stream_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IDebugStream.$", 0x0, false, 0x84cb322914648614 );
        SDK_FIXED_SIZE( i_debug_stream_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_debug_stream_t, 0x8 );
