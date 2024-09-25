#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBufferInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_buffer_internal_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IBufferInternal.$", 0x8, true, 0x19326010c30431 );
        SDK_FIXED_SIZE( i_buffer_internal_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_buffer_internal_t, 0x8 );
