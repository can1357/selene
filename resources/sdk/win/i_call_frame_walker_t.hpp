#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallFrameWalker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_frame_walker_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICallFrameWalker.$", 0x8, true, 0x574021707009119d );
        SDK_FIXED_SIZE( i_call_frame_walker_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_call_frame_walker_t, 0x8 );
