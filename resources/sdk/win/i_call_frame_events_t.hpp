#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallFrameEvents]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_frame_events_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICallFrameEvents.$", 0x8, true, 0xcc309667263f72a8 );
        SDK_FIXED_SIZE( i_call_frame_events_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_call_frame_events_t, 0x8 );
