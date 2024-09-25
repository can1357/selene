#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetProtocolInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_protocol_info_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IInternetProtocolInfo.$", 0x8, true, 0x95ffde450a0fc80e );
        SDK_FIXED_SIZE( i_internet_protocol_info_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_internet_protocol_info_t, 0x8 );
