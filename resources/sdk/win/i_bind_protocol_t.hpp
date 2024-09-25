#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindProtocol]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_protocol_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IBindProtocol.$", 0x8, true, 0x14bab3b0cc3b91a9 );
        SDK_FIXED_SIZE( i_bind_protocol_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_bind_protocol_t, 0x8 );
