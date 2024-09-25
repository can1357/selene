#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBuffer]
    // => Windows 10 v1607
    //
    struct i_buffer_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "IBuffer.$", 0x0, false, 0x340b75eeb4a31989 );
        SDK_FIXED_SIZE( i_buffer_t, 0x8 );
    };               
};
SDK_VERIFY( struct win::i_buffer_t, 0x8 );
