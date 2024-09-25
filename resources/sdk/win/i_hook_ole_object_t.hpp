#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IHookOleObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_hook_ole_object_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IHookOleObject.$", 0x8, true, 0x1dcc02b8004137ea );
        SDK_FIXED_SIZE( i_hook_ole_object_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_hook_ole_object_t, 0x8 );
