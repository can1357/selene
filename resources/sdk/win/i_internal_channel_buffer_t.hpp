#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IInternalChannelBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_internal_channel_buffer_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IInternalChannelBuffer.$", 0x10, true, 0x129d25772d2248a );
        SDK_FIXED_SIZE( i_internal_channel_buffer_t, 0x10 );
    };                               
};
SDK_VERIFY( class win::i_internal_channel_buffer_t, 0x10 );
