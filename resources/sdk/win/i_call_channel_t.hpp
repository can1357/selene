#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_channel_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "ICallChannel.$", 0x8, true, 0x8fb8182a3e4f6029 );
        SDK_FIXED_SIZE( i_call_channel_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_call_channel_t, 0x8 );
