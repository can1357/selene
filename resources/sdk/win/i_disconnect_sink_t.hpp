#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDisconnectSink]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_disconnect_sink_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IDisconnectSink.$", 0x8, true, 0x61fc4917131897f7 );
        SDK_FIXED_SIZE( i_disconnect_sink_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_disconnect_sink_t, 0x8 );
