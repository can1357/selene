#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetProtocolSinkStackable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_protocol_sink_stackable_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "IInternetProtocolSinkStackable.$", 0x8, true, 0x7609abef32a2fa85 );
        SDK_FIXED_SIZE( i_internet_protocol_sink_stackable_t, 0x8 );
    };                                         
};
SDK_VERIFY( struct win::i_internet_protocol_sink_stackable_t, 0x8 );
