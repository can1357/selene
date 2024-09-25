#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetProtocolSink]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_protocol_sink_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IInternetProtocolSink.$", 0x8, true, 0x3813cfd676198035 );
        SDK_FIXED_SIZE( i_internet_protocol_sink_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_internet_protocol_sink_t, 0x8 );
