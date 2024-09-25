#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGetContextId]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_get_context_id_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IGetContextId.$", 0x8, true, 0x393d6b95c5ea6bb8 );
        SDK_FIXED_SIZE( i_get_context_id_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_get_context_id_t, 0x8 );
