#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_stream_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "IStream.$", 0x8, true, 0x742e266e131b06fa );
        SDK_FIXED_SIZE( i_stream_t, 0x8 );
    };               
};
SDK_VERIFY( struct win::i_stream_t, 0x8 );
