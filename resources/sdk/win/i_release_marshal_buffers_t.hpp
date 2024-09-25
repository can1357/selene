#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IReleaseMarshalBuffers]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_release_marshal_buffers_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IReleaseMarshalBuffers.$", 0x8, true, 0x76ce2f5de123a64f );
        SDK_FIXED_SIZE( i_release_marshal_buffers_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_release_marshal_buffers_t, 0x8 );
