#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetProtocol]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_protocol_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IInternetProtocol.$", 0x8, true, 0x82403b9326b4230 );
        SDK_FIXED_SIZE( i_internet_protocol_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_internet_protocol_t, 0x8 );
