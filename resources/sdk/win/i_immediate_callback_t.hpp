#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IImmediateCallback]
    // => Windows 11
    //
    struct i_immediate_callback_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IImmediateCallback.$", 0x0, false, 0x322594183a2e192a );
        SDK_FIXED_SIZE( i_immediate_callback_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_immediate_callback_t, 0x8 );
