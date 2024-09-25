#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWrappedProtocol]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_wrapped_protocol_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IWrappedProtocol.$", 0x8, true, 0xcfb845abfeee58e0 );
        SDK_FIXED_SIZE( i_wrapped_protocol_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_wrapped_protocol_t, 0x8 );
